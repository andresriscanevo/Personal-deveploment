/*
La siguiente tabla presenta la categoría de la EPS y el valor de la cuota moderadora correspondiente.
Categoría   Cuota       Salario
    A       $3.500      Hasta 2 Salarios Mínimos
    B       $11.500     De 2 a 4 Salarios Mínimos
    C       $20.000     Más de 4 Salarios Mínimos
Cree un programa que permita leer la categoría de afiliación a la EPS y 
muestre al usuario el valor de la Cuota Moderadora. Validar la categoría y generar mensaje de error.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    float salario,minimo=1000000;
    while (true){
        
        cout << "categoria de afiliacion eps \n";
        cout <<"digite su salario:  ";
        cin>> salario;
        
        if (salario<2*minimo ){
            cout << "Pertenece a la categoria A y la couta es de $3500\n";
        }
        else if (salario>=2*minimo && salario<4*minimo){
            cout << "Pertenece a la categoria B y la couta es de $11000\n";
        }
        else if (salario>4*minimo){
            cout << "Pertenece a la categoria C y la couta es de $20000\n";
        }
        
        else {
            cout << "error\n";
        }
        
    }
    return 0;
}