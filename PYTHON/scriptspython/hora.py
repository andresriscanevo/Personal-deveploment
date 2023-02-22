from datetime import datetime,date
from datetime import timedelta
ahora = datetime.now().time()
horasalida = datetime.strptime("19:00:00", "%X").time()
print(ahora)
print(horasalida)
if (ahora>horasalida):
    print("Es hora de salir")
else:
    
    diferencia = datetime.combine(date.min, horasalida) - datetime.combine(date.min, ahora)
    print(f"no es hora de salir, te faltan {diferencia} horas")