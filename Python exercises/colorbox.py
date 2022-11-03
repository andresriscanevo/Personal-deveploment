from time import sleep
import RPi.GPIO as gpio
sol1=12
sol2=13
sol3=15
sol4=16
bro1=35
bro2=36
bro3=37
bro4=38
gpio.setmode(gpio.BCM)
gpio.setup(sol1,gpio.OUT)
gpio.setup(sol2,gpio.OUT)
gpio.setup(sol3,gpio.OUT)


while True:
    try:
        print("Pulsa...")
        print("1. solenoide 1")
        print("2. solenoide 2 ")
        print("3. solenoide 4")
        print("q. para salir")
        pulse = input("A continución: ")
        if pulse in ['q', 'Q']:
            break
        try:
            pulse = int(pulse)
        except:
            print(f"No reconozco esto '{pulse}'")
            
        if pulse in [1,2,3]:
            if pulse == 1:
                gpio.output(sol1, gpio.HIGH)
                sleep(2.5)
                gpio.output(sol1, gpio.LOW)
            if pulse == 2:
                gpio.output(sol2, gpio.HIGH)
                sleep(2.5)
                gpio.output(sol2, gpio.LOW)
            if pulse == 3:
                gpio.output(sol3, gpio.HIGH)
                sleep(2.5)
                gpio.output(sol3, gpio.LOW)
                
            
            
    except KeyboardException:
        break
    except Exception as e:
        print(f"ERROR: {e}")

gpio.cleanup()