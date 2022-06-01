def esprimo( num):
    for n in range(2,num):
        if num%n==0:
            print("no es primo")
            return False
        else:
            print("es primo")
            return True
esprimo(14)
esprimo(7)
esprimo(10)
esprimo(13)
esprimo(20)
