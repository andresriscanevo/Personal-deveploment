import math
from re import A
def areatriangulo(altura,base):
    print(f"el area del triangulo es: {base*altura/2}") 
def areacirculo(radio):
    print(f"El area del circulo es:{(math.pi*radio**2)}") 
#Ejemplos del uso de las funciones 
areatriangulo(2,5)
areacirculo(6)