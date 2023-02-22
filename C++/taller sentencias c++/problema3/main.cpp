#include <iostream>
#include <string>
using namespace std;
#include <math.h>
/* Elaborar un programa en C++, que calcule en pesos, el costo total semanal de
la producción de una empresa, El programa debe permitir ingresar el número de
unidades producidas a la semana y el actual valor del dólar (TRM).
*/
int main()
{
    float unidades = 0, trm = 0, costosfijos = 285, costounitario = 2.5;
    float gastototal;
    printf("Calculo en pesos de la tasa\n");
    printf("Ingrese el numero de unidades vendidas\n ");
    scanf("%f", &unidades);
    printf("Ingrese el valor de la tasa TRM \n");
    scanf("%f", &trm);
    gastototal = unidades * costounitario * trm + costosfijos * trm;
    printf("el valor de gastos fijos  en pesos es igual a = %.3f \n", costosfijos * trm);
    printf("el valor de gastos totales semanales en pesos es igual a = %.3f \n", gastototal);

    return 0;
}