def arithmetic_arranger(problems,answer):
    
    primerlinea=""; segundlinea=""; operado=""; sums=[];linea=" "
    if (len(problems)>5):
        arranged_problems="Error: Too many problems."
    else:
        for item in problems:
            if "*"in item or "x" in item or "/" in item:
                arranged_problems="Error: Operator must be '+' or '-'"
            elif "." in item:
                arranged_problems="Error: Numbers must only contain digits."
            else:
                problems1=item.split()
                primeralinea=problems1[0]
                operador=problems1[1]
                segundalinea=problems1[2]
                if len(primeralinea)>4 or len(segundalinea)>4:
                    arranged_problems="Error: Numbers cannot be more than four digits."
                if (operador=='+' or operador=='-'):
                    if (operador=='+'):
                        sums=str(int(primeralinea)+int(segundalinea))
                    else:
                        sums=str(int(primeralinea)-int(segundalinea))
                    mayor=max(len(primeralinea),len(segundalinea))+2
                    primerlinea+=(primeralinea.rjust(mayor))+"    "
                    segundlinea+=operador+(segundalinea.rjust(mayor-1))+"    "
                    operado+=sums.rjust(mayor)+"    "
                    for l in range(mayor):
                        linea=linea+'-'
                    linea=linea+"    "
                else:
                    arranged_problems="Error: Operator must be '+' or '-'"
    if (answer==True):    
        arranged_problems=print(primerlinea,'\n',segundlinea,'\n',linea,'\n',operado)
    else:
        arranged_problems=print(primerlinea,'\n',segundlinea,'\n',linea,'\n')
    return arranged_problems
arithmetic_arranger(["32 + 8", "10 - 3801", "9999 + 9999", "523 - 49"],False)