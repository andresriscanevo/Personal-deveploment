import RPi.GPIO as gpio
from threading import Thread

ledred=19
ledgreen=16
ledblue=26
freq = 200

gpio.setmode(gpio.BCM)
gpio.setup(ledred,gpio.OUT)
gpio.setup(ledgreen,gpio.OUT)
gpio.setup(ledblue,gpio.OUT)

def TurnOn(dutyr,dutyg,dutyb):
    r = Thread(target=_turnOn, args=("r", dutyr,))
    r.setDaemon(True)
    g = Thread(target=_turnOn, args=("g", dutyg,))
    g.setDaemon(True)
    b = Thread(target=_turnOn, args=("b", dutyb,))
    b.setDaemon(True)
    r.start()
    g.start()
    b.start()

def _turnOn(val, duty):
    global pwmlr, pwmlg, pwmlb
    duty=int(duty)*100/255
    if val == "r":
        pwmlr.ChangeDutyCycle(duty)
    elif val == "g":
        pwmlg.ChangeDutyCycle(duty)
    elif val == "b":
        pwmlb.ChangeDutyCycle(duty)
    else:
        print("Error.. Setting all to 255.")
        pwmlr.ChangeDutyCycle(100)
        pwmlg.ChangeDutyCycle(100)
        pwmlb.ChangeDutyCycle(100)
try:
    
    pwmlr=gpio.PWM(ledred,freq)
    pwmlb=gpio.PWM(ledblue,freq)
    pwmlg=gpio.PWM(ledgreen,freq)
    pwmlr.start(0)
    pwmlg.start(0)
    pwmlb.start(0)
    while True:
        dutys=input("RGB: ")
        dutyg=input("GREEN: ")
        dutyb=input("BLUE: ")
        dutyr, dutyg, dutyb = dutys
        TurnOn(dutyr,dutyg,dutyb)
        print("digita nuevamente \n")
        
except KeyboardInterrupt: 
    print("keyboard interrupt")
except:
    print("some error")
finally:
    print("clean up")
    gpio.cleanup()

