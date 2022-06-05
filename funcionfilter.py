from functools import reduce
listica=[2,4,5,6,7]
def numberimpar(a):
    nimpar=[]
    if a%2!=0:
        nimpar.append(a)
    return nimpar
a=filter(numberimpar,listica)
an=list(a)
print("la lista inicial es",listica)
print("la lista de los numeros impares es",an)

print("la suma de los elementos de la lista es  ",reduce(lambda a, b: a+b, an))
