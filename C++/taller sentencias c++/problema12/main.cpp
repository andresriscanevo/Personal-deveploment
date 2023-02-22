/*
El Supermercado EL PODER requiere un programa en C++, 
que lea el precio unitario y la cantidad de artículos y
 calcule el valor a pagar por la compra, sabiendo que el IVA
  es del 19% del valor total. Escribir el precio unitario,
   la cantidad, el valor total, el valor del IVA y el valor neto a pagar.
*/
#include <iostream>
#include <string>
using namespace std;
#include <math.h>

int main() {
    float puni,cantidad,valortotal,iva,valorneto;

    cout << "supermercado \n";
    cout <<"digita el precio unitario: ";
    cin>>puni;
    cout <<"digita la cantidad: ";
    cin>>cantidad;
    valortotal=cantidad*1.19*puni;
    iva=cantidad*0.19*puni;
    valorneto=cantidad*puni;
    cout <<"precio unitario="<< puni<<" cantidad ="<<cantidad<<" valor total ="<<valortotal<<" valor del iva="<<iva<<" valorneto="<<valorneto;
    return 0;
}