numeroinicial=int(input("digita el numero inicial: "))
numerofinal=int(input("digita el numero final: "))
if numeroinicial%2==0:
        numeroinicial=numeroinicial+1
for i in  range(numeroinicial,numerofinal,2):
    print(i)