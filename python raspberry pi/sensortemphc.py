import os
import time
from threading import Thread
from datetime import datetime as dt
from w1thermsensor import W1ThermSensor


class TemperatureSensor:
    folder = os.getcwd()
    refreshRate = 180.0  # 3 minutes
    readRate = 15.0
    running = True
    tempArray = []

    def __init__(self, refreshRate: float = 180.0, readRate: float = 15.0) -> None:
        if isinstance(refreshRate, float):
            self.refreshRate = refreshRate
        else:
            print("Setting default refresh rate: '{}'".format(self.refreshRate))
        if isinstance(readRate, float):
            self.readRate = readRate
        else:
            print("Setting default read rate: '{}'".format(self.readRate))
        self.sensor = W1ThermSensor()

    def restart(self):
        print("Restarting sensor...")
        time.sleep(1.5)
        self.sensor = W1ThermSensor()
        self.tempArray = []
        self.running = True
        self.start()
        print("Done!")

    def start(self):
        t1 = Thread(target=self._read)
        t1.setDaemon(True)
        t1.start()
        t2 = Thread(target=self._write)
        t2.setDaemon(True)
        t2.start()
        return self

    def _read(self):
        while self.running:
            try:
                temperature = self.sensor.get_temperature()
                self.tempArray.append(temperature)
                time.sleep(self.readRate)
            except Exception as e:
                print("Error reading sensor, restarting...")
                self.running = False
        self.restart()

    def _write(self):
        filePath = os.path.join(self.folder, "templog{}.txt".format(
            dt.now().strftime("%Y%m%d_%H%M%S")))
        df = open(filePath, 'a', 1)
        head = "date,min,max,avg"
        print(head)
        df.write(head+"\n")
        initial = time.time()
        try:
            while self.running:
                if self.running and ((time.time()-initial) >= self.refreshRate):
                    temp = dt.now().strftime("%Y-%m-%d %H:%M:%S")+","
                    temp += str(round(min(self.tempArray), 2))+","
                    temp += str(round(max(self.tempArray), 2))+","
                    temp += str(round(sum(self.tempArray) /
                                len(self.tempArray), 2))
                    print(temp)
                    df.write(temp+"\n")
                    initial = time.time()
                    self.tempArray = []
                time.sleep(1.0)
        except KeyboardInterrupt:
            print("Closed OK!")
            df.close()
        except Exception as e:
            print("Closed with error: '{}'".format(e))
            df.close()


sensor = TemperatureSensor(600).start()
while True:
    time.sleep(2.0)
