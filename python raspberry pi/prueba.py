import Jetson.GPIO as GPIO
import time

HIGH = GPIO.HIGH
LOW = GPIO.LOW
GPIO.setmode(GPIO.BOARD)
GPIO.setwarnings(False)

sol1 = 12 #funciona 
sol2 = 13
sol3 = 15 #funciona
sol4 = 16 #funciona 1
deco1 = 21
deco2 = 22
deco3 = 23
deco4 = 24
fc1 = 26
fc2 = 29
fc3 = 31
fc4 = 32
broch1=35
broch2=36
broch3=37
broch4=38
GPIO.setup(sol1, GPIO.OUT, initial=LOW)
GPIO.setup(sol2, GPIO.OUT, initial=LOW)
GPIO.setup(sol3, GPIO.OUT, initial=LOW)
GPIO.setup(sol4, GPIO.OUT, initial=LOW)
GPIO.setup(deco1, GPIO.OUT, initial=LOW)
GPIO.setup(deco2, GPIO.OUT, initial=LOW)
GPIO.setup(deco3, GPIO.OUT, initial=LOW)
GPIO.setup(deco4, GPIO.OUT, initial=LOW)
GPIO.setup(fc1, GPIO.IN)
GPIO.setup(fc2, GPIO.IN)
GPIO.setup(fc3, GPIO.IN)
GPIO.setup(fc4, GPIO.IN)
GPIO.setup(broch1, GPIO.IN)
GPIO.setup(broch2, GPIO.IN)
GPIO.setup(broch3, GPIO.IN)
GPIO.setup(broch4, GPIO.IN)
try:
    while True:
        print("Pulsa...")
        print("1. solenoide 1")
        print("2. solenoide 2")
        print("3. solenoide 3")
        print("4. solenoide 4")
        print("5. luz deco 1")
        print("6. luz deco 2")
        print("7. luz deco 3")
        print("8. luz deco 4")
        print("q. para salir")

        pulse = input("A continuación: ")
        if pulse in ['q', 'Q']:
            break

        pulse = int(pulse)

        if pulse in [1, 2, 3, 4]:
            if pulse == 1:
                GPIO.output(sol1, HIGH)
                time.sleep(3)
                GPIO.output(sol1, LOW)
            elif pulse == 2:
                GPIO.output(sol2, HIGH)
                time.sleep(3)
                GPIO.output(sol2, LOW)
            elif pulse == 3:
                GPIO.output(sol3, HIGH)
                time.sleep(3)
                GPIO.output(sol3, LOW)
            elif pulse == 4:
                GPIO.output(sol4, HIGH)
                time.sleep(3)
                GPIO.output(sol4, LOW)

        elif pulse in [5, 6, 7, 8]:
            print("1 para encendido.")
            print("2. para apagar")
            opc = input()

            if pulse == 5:
                pin = deco1
            elif pulse == 6:
                pin = deco2
            elif pulse == 7:
                pin = deco3
            elif pulse == 8:
                pin = deco4

            if opc == '1':
                GPIO.output(pin, HIGH)
            elif opc == '2':
                GPIO.output(pin, LOW)
            else:
                print("Opción no válida")
        elif pulse == 9:
            fc1_state = GPIO.input(fc1)
            if fc1_state == GPIO.LOW:
                print("Final de carrera 1 oprimido")
            else:
                print("Final de carrera 1 no oprimido")
            fc2_state = GPIO.input(fc2)
            if fc2_state == GPIO.LOW:
                print("Final de carrera 2 oprimido")
            else:
                print("Final de carrera 2 no oprimido")
            fc3_state = GPIO.input(fc3)
            if fc3_state == GPIO.LOW:
                print("Final de carrera 3 oprimido")
            else:
                print("Final de carrera 3 no oprimido")
            fc4_state = GPIO.input(fc4)
            if fc4_state == GPIO.LOW:
                print("Final de carrera 4 oprimido")
            else:
                print("Final de carrera 4 no oprimido")
            #broche
            broch1_state = GPIO.input(broch1)
            if broch1_state == GPIO.LOW:
                print("broche 1 asegurado")
            else:
                print("broche 1 no asegurado") 
            broch2_state = GPIO.input(broch2)
            if broch2_state == GPIO.LOW:
                print("broche 2 asegurado")
            else:
                print("broche 2 no asegurado") 
except KeyboardInterrupt:
    GPIO.cleanup()
