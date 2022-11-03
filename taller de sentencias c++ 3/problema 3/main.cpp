/*Una aseguradora debe determinar los valores del seguro de vida de sus clientes. 
Si la tarifa básica es de $17.500 por cada año de vida, calcular el valor a pagar
teniendo en cuenta las siguientes condiciones de edad (ingresada por teclado) del afiliado:
    Si la edad es menor o igual a 0 o mayor de 90, escribir “Dato Errado”
    Si la edad es menor de 40 años, paga el 70% de la tarifa básica
    Si la edad está entre 40 y 60 años, paga el 85% de la tarifa básica
    Si la edad es mayor de 60 y menor de 70 años, paga la tarifa plena
    Si la edad está entre 70 y 85 años, paga un sobrecosto de 50% de la tarifa plena
    A personas con edad superior a 85 años, no se ofrece seguro.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    float tarifabasica=17500,edad=0;
    string tipo;
    while (true){
        
        cout << "Aseguradora  \n";
        cout <<"digite sus años de vida:  ";
        cin>>edad;
        
        if (edad==0 || edad>90){
            cout << "Dato Errado\n";
        }
        else if (edad >0 && edad< 40){
            cout << "El costo total es de $"<<edad*tarifabasica*0.7<<"\n";
        }
        else if (edad>=40 && edad <60){
            cout << "El costo total es de $"<<edad*tarifabasica*0.85<<"\n";
        }
        else if (edad>=70 && edad <70){
            cout << "El costo total es de $"<<edad*tarifabasica<<"\n";
        }
        else if (edad>=70 && edad <85){
            cout << "El costo total es de $"<<edad*tarifabasica*1.50<<"\n";
        }
        else if (edad>=85 && edad <=90){
            cout << "No se ofrece seguro \n";
        }
        
    }
    return 0;
}