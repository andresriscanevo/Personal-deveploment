/*
Escribir un programa en C++ que permita obtener el grado de eficiencia de un operario de una fábrica de tornillos,
de acuerdo con las siguientes condiciones que se le imponen para un período de prueba:
Menos de 200 tornillos defectuosos
Más de 10.000 tornillos producidos
El grado de eficiencia se determina de la siguiente manera:
Si no cumple ninguna de las condiciones, Grado 1
Si sólo cumple la primera condición, Grado 2
Si sólo cumple la segunda condición, Grado 3
Si cumple las dos condiciones, Grado 4
El usuario debe digitar la cantidad de tornillos producidos y defectuosos y calcular, obtener e imprimir el grado.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    float ctornillos,defectuosos=0;
    while (true){
        
        cout << "fabrica de tornillos  \n";
        cout <<"digite la cantidad de tornillos producidos:  ";
        cin>>ctornillos;
        cout <<"digite la cantidad de tornillos defectuosos:  ";
        cin>>defectuosos;
        if (defectuosos>200 && ctornillos<10000){
            cout << "GRADO 1\n";
            
        }
        else if (ctornillos>10000 && defectuosos>=200){
            cout << "GRADO 3\n";
        }
        else if (ctornillos<10000 && defectuosos<200){
            cout << "GRADO 2\n";
        }
        else {
            cout<<"GRADO 4\n";
        }
        
    }
    return 0;
}