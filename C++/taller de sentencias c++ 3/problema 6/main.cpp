/*
El Hospital SANARTE ha solicitado los servicios de un programador para que realice un programa
en C++ que le permita leer por teclado el tipo de plan y edad del paciente y determinar e 
imprimir cuál es el porcentaje que deben pagar los pacientes por el servicio recibido, 
teniendo en cuenta las siguientes condiciones:
    Si el plan de salud es A o B y la edad del paciente está entre 0 y 12 años, paga el 6%.
    Si el plan de salud es A o B y la edad del paciente es mayor de 12 y menor de 25 años, paga el 7,5%.
    Si el plan de salud es A o B y la edad del paciente es mayor o igual a 25, paga 9%
    Para el plan C aplican las mismas condiciones de edad, pero las tarifas cambian a 9%, 12% y 15% respectivamente.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    float cantidad=0.0,edad=0;
    string plan;
    while (true){

        cout << "HOSPITAL SANARTE  \n";
        cout <<"digite el plan de salud (A,B,C) ";
        cin>>plan;
        
        
        if (plan=="A"|| plan == "B"){
            cout <<"digite la edad del paciente ";
            cin>>edad;
            if (edad>=0 && edad<12){
                cout << "El porcentaje es del 6%\n";
            }
            else if (edad>=12 && edad<25){
                cout << "El porcentaje es del 7.5%\n";
            }
            else if (edad>25){
                cout <<"El porcentaje es del 9%\n";
            }
        }
        else if (plan=="C"){
            cout <<"digite la edad del paciente ";
            cin>>edad;
            if (edad>=0 && edad<12){
                cout << "El porcentaje es del 9%\n";
            }
            else if (edad>=12 && edad<25){
                cout << "El porcentaje es del 12%\n";
            }
            else if (edad>25){
                cout <<"El porcentaje es del 15%\n";
            }
        else{
            cout <<"plan incorrecto";
        }
        }
    
    }
}