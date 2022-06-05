import os
archiv=open("datos.txt",'w+')
archiv.write("hola mi nombre es andres")
archiv.close()
archiv=open('datos.txt','r')
b=archiv.read()
archiv.close()
print(b)