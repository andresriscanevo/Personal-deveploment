# Calculo del indice de masa corporal
from numpy import double


peso=input("Escribe tu peso en Kg: ")
estatura=input("Escribe tu estatura en metros: ")
IMC=int(peso)/double(estatura)
print(f"tu indice de masa corporal es {str(round(IMC,2))}")