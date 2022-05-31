# pruebas para la manipulacion de una cinta RGB en rpi
import RPi.GPIO as gpio
ledred=19
ledgreen=16
ledblue=26
gpio.setmode(gpio.BCM)
gpio.setup(ledred,gpio.OUT)
gpio.setup(ledgreen,gpio.OUT)
gpio.setup(ledblue,gpio.OUT)

pwmlr=gpio.PWM(ledred,500)
pwmlb=gpio.PWM(ledblue,500)
pwmlg=gpio.PWM(ledgreen,500)
pwmlr.start(0)
pwmlg.start(0)
pwmlb.start(0)