import  Jetson.GPIO as GPIO
import time

HIGH = GPIO.HIGH
LOW = GPIO.LOW
GPIO.setmode(GPIO.BOARD)
GPIO.setwarnings(False)
sol1=12
sol2=13
sol3=15
sol4=16
deco1=21
deco2=22
deco3=23
deco4=24
GPIO.setup(sol1,GPIO.OUT,initial=GPIO.OUT)
GPIO.setup(sol2,GPIO.OUT,initial=GPIO.OUT)
GPIO.setup(sol3,GPIO.OUT,initial=GPIO.OUT)
GPIO.setup(sol4,GPIO.OUT,initial=GPIO.OUT)
GPIO.setup(deco1,GPIO.OUT,initial=GPIO.OUT)
GPIO.setup(deco2,GPIO.OUT,initial=GPIO.OUT)
GPIO.setup(deco3,GPIO.OUT,initial=GPIO.OUT)
GPIO.setup(deco4,GPIO.OUT,initial=GPIO.OUT)

while True:
    try:
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
        pulse = input("A continución: ")
        if pulse in ['q', 'Q']:
            break
        try:
            pulse = int(pulse)
        except:
            print(f"No reconozco esto '{pulse}'")
            
        if pulse in [1,2,3,4,5,6,7,8]:
            if pulse==1:
                GPIO.output(sol1,HIGH)
                time.sleep(3)
                GPIO.output(sol1,LOW) 
            
            if pulse==2:
                GPIO.output(sol2,HIGH)
                time.sleep(3)
                GPIO.output(sol2,LOW) 
            if pulse==3:
                GPIO.output(sol3,HIGH)
                time.sleep(3)
                GPIO.output(sol3,LOW) 
            if pulse==4:
                GPIO.output(sol4,HIGH)
                time.sleep(3)
                GPIO.output(sol4,LOW) 
            
            if pulse == 5:
                print("presiona:\n 1 para encendido. \n  2. para apagar \n 3. para usar otro pin\n")
                opc =input()
                if (opc=='1'):
                    GPIO.output(deco1, HIGH)
                elif (opc=='2'):
                    GPIO.output(deco1,LOW)
                elif pulse in ['q', 'Q']:
                    break
                try:
                    pulse = int(pulse)
                except:
                    print(f"No reconozco esto '{pulse}'")
  
            if pulse == 6:
                print("presiona:\n 1 para encendido. \n  2. para apagar \n 3. para usar otro pin\n")
                opc =input()
                if (opc=='1'):
                    GPIO.output(deco2, HIGH)
                elif (opc=='2'):
                    GPIO.output(deco2,LOW)
                elif pulse in ['q', 'Q']:
                    break
                try:
                    pulse = int(pulse)
                except:
                    print(f"No reconozco esto '{pulse}'")
  
            if pulse == 7:
                print("presiona:\n 1 para encendido. \n  2. para apagar \n 3. para usar otro pin\n")
                opc =input()
                if (opc=='1'):
                    GPIO.output(deco3, HIGH)
                elif (opc=='2'):
                    GPIO.output(deco3,LOW)
                elif pulse in ['q', 'Q']:
                    break
                try:
                    pulse = int(pulse)
                except:
                    print(f"No reconozco esto '{pulse}'")
            if pulse==8:
                print("presiona:\n 1 para encendido. \n  2. para apagar \n 3. para usar otro pin\n")
                opc =input()
                if (opc=='1'):
                    GPIO.output(deco4, HIGH)
                elif (opc=='2'):
                    GPIO.output(deco4,LOW)
                elif pulse in ['q', 'Q']:
                    break
                try:
                    pulse = int(pulse)
                except:
                    print(f"No reconozco esto '{pulse}'")
  
                
            
    except Exception as e:
        print(f"ERROR: {e}")

GPIO.cleanup()
