/*
Escribir un programa que asigne e imprima una calificación literal conociendo la calificación cuantitativa, 
basada en la siguiente tabla de puntuaciones: Calificación Valoración
0.0 – 3.0 Deficiente
3.0 – 4.0 Aceptable
4.0 – 4.5 Sobresaliente
4.5 – 5.0 Excelente
Para notas que no se encuentren dentro del rango de 0.0 a 5.0 escribir el mensaje “DATO ERRADO”.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    float calificacion;
    string tipo;
    while (true){
        
        cout << "calificacion  \n";
        cout <<"digite su calificacion en una escala de 1-5:  ";
        cin>>calificacion;
        
        if (calificacion>=0.0 && calificacion<3.0){
            cout << "DEFICIENTE\n";
        }
        else if (calificacion >=3.0 && calificacion< 4.0){
            cout << "ACEPTABLE\n";
        }
        else if (calificacion>=4.0 && calificacion <4.5){
            cout << "SOBRESALIENTE\n";
        }
        else if (calificacion>=4.5 && calificacion <=5.0){
            cout << "EXCELENTE\n";
        }
        else {
            cout << "DATO ERRADO\n";
        }
        
    }
    return 0;
}