def yearbisiesto(year):
    if (year%4==0 or year%400==0 and year%100!=0):
        print(f" El año {year} es bisiesto")   
    else:
        print(f"El año {year} no es bisiesto")
        
yearbisiesto(2022)
yearbisiesto(2024)
yearbisiesto(1996)
yearbisiesto(2021)