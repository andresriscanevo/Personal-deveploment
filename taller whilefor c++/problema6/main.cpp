/*
6.	Una compañía debe calcular la comisión que reciben los vendedores de su departamento
de ventas teniendo en cuenta el valor mensual de ventas de cada uno (valor de venta 
ingresado por teclado). Las comisiones se calculan así:
                Ventas menores que $5.000.000 el 5%
                Ventas entre $5.000.000 y $10.000.000 el 7.5%
                - Ventas Mayores que $10.000.000 hasta $20.000.000 el 10%
                Ventas superiores a $20.000.000 el 15%

*/
#include <iostream>
using namespace std;
int main() {
    long Venta;
    float comision;
    do {
        printf("Digite su valor mensual de ventas:");
        scanf("%ld", &Venta);
    } while (Venta<=0);
    switch(Venta)
    {
    case 1 ... 4999999: 
        comision=Venta*0.05;
        break;
    case 5000000 ... 9999999:
        comision=Venta*0.075;
        break;
    case 10000000 ... 19999999:
        comision=Venta*0.1;
        break;
    default:
        comision=Venta*0.15;
        break;
        
    }
    printf("Comision recibida: %f",comision);
    return 0;
}