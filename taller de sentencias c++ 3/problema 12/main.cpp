/*
La Universidad Militar requiere de un programa en C++ que determine el valor 
de la matrícula de un estudiante conociendo la clase de vinculación, así: 
Tipo de Vinculación          Matrícula
    P                       $6.500.000
    M                       $5.300.000
    I                       $4.600.000
Leer el tipo de vinculación y escribir el precio que se debe pagar por la matrícula. 
El programa debe validar la clase de vinculación, para valores diferentes de vinculación, debe escribir “CLASE ERRADA”.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    float precio,cantidad;
    string clase;
    while (true){

        cout << "tipo de vinculacion UMNG \n";
        cout <<"digita la clase de vinculacion ";
        cin>>clase;
        if (clase =="P"){
            cout<<"el valor total es igual a $6.500.000 \n";
        }
        else if (clase =="M"){
            cout<<"el valor total es igual a $5.300.000 \n";            
        }
        else if (clase =="I"){
            cout<<"el valor total es igual a $4.600.000 \n";
        }
        
        else {
            cout <<" DATO ERRADO \n";
        }
        }
    
    }
