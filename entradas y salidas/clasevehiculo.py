class vehiculo:
    marca=""
    modelo=2000
    color=""
    puertas=1
    pasajeros=1
    def __init__(self,marca,modelo,color,puertas,pasajeros):
        self.marca=marca
        self.modelo=modelo
        self.color=color
        self.puertas=puertas
        self.pasajeros=pasajeros
    def caracteristicas(self):
        print("la marca del carro es ",self.marca)
        print("el modelo del carro es ",self.modelo)
        print("el color  del carro es ",self.color)
        print("0el carro tiene ",self.puertas,"puertas")
        print("la cantidad de pasajeros que tiene el carro es ",self.pasajeros)