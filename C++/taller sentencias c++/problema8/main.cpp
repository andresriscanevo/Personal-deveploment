/*
Elaborar un programa en C++, para una empresa de acueducto que requiere
 determinar el pago que debe realizar una persona por el total de metros 
 cúbicos de agua consumidos, al llenar un estanque de forma rectangular 
 y cuyas dimensiones de largo, ancho y profundidad se ingresan por teclado. 
 El costo por metro cúbico es de $1.250.
*/
#include <iostream>
#include <string>
using namespace std;
#include <math.h>
int main() {
    float largo=0,ancho=0,profundidad=0,costom3=1250;
    float pagometrocubicos;
    cout << "costo de metro cubico\n";
    cout <<"Ingrese el largo del tanque: ";
    cin>>largo;
    cout <<"Ingrese el ancho del tanque: ";
    cin>>ancho;
    cout <<"ingrese la profundidad del tanque: ";
    cin>>profundidad;
    pagometrocubicos=largo*ancho*costom3*profundidad;
    cout <<"el pago en metros consumidos es igual a = $ "<<pagometrocubicos;
    
    
    return 0;
}