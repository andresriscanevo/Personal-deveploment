class vehiculo:
    color="Rojo"
    ruedas=4
    puertas=4
class coche(vehiculo):
    velocidad=110
    cilindrada=1500
coche1=coche()

print(f"EL color del coche1 {coche1.color}")
print(f"El coche1 tiene {coche1.puertas} puertas")
print(f"el coche tiene {coche1.ruedas} ruedas")
print(f"la velocidad del carro es {coche1.velocidad}")
print(f"el cilindraje de carro es {coche1.cilindrada}")

