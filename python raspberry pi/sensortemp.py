#Para la correcta lectura del sensor de temperatura con one wire se debe:
# pip3 install w1thermsensor
# activar en las opciones de interfaz onewire
# sudo modprobe w1-gpio
# sudo modprobe w1-thermsensor
# 
import time
from w1thermsensor import W1ThermSensor
from datetime import  datetime

sensor = W1ThermSensor()

with open("temperaturas.txt", "w") as file:
    while True:
        temperature = sensor.get_temperature()
        datetimenow = datetime.now()
        file.write("La temperatura: %s " % temperature + " fecha: " + str(datetimenow) + "\n")
        time.sleep(1)
