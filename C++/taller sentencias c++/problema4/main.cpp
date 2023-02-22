/* Juan desea vender un lote rectangular y para ellos se debe crear
un programa en C++ que permita calcular y escribir el valor de este,
sabiendo que el valor de cada metro cuadrado es de $200.000, el valor 
del ancho es dado por el usuario y su largo es el doble del ancho.
*/
#include <iostream>
#include <string>
using namespace std;
#include <math.h>
int main() {
    // Write C++ code here
    float metrosancho=0,metroslargo=0;
    float valor;
    printf("Venta de lote rectangular\n");
    printf("Ingrese el numero de metros de ancho\n ");
    scanf("%f",&metrosancho);
    metroslargo=metrosancho*2;
    valor=metrosancho*metroslargo*200;
    printf("el valor del lote es igual a =$ %.0f   \n",valor);
    
    
    return 0;
}