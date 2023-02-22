def fibonacci(n):
    a = 0
    b = 1
    if n == 0:
        return
    elif n == 1:
        print(a)
        return
    else:
        print(a)
        print(b)
        for i in range(2, n):
            c = a + b
            a = b
            b = c
            print(c)
var=input()
fibonacci(var)

///
#Para la correcta lectura del sensor de temperatura con one wire se debe:
# pip3 install w1thermsensor
# activar en las opciones de interfaz onewire
# sudo modprobe w1-gpio
# sudo modprobe w1-therm
# agregar la linea dt-overlay=w1-gpio en /boot/config.txt
import time
from w1thermsensor import W1ThermSensor
from datetime import  datetime

sensor = W1ThermSensor()

with open("temperaturas.txt", "w+") as file:
    while True:
        temperature = sensor.get_temperature()
        datetimenow = datetime.now()
        file.write("La temperatura: %s " % temperature + " fecha: " + str(datetimenow) + "\n")
        time.sleep(30)
 