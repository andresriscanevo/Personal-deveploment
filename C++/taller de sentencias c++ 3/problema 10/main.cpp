/*
Realizar un programa en C++ que calcule e imprima el costo del envío de un paquete dado
su peso en gramos y sabiendo que el valor base del envío es de $250 por gramo:
Si el peso del paquete es inferior a 75 gramos el costo de su envío tiene un descuento del 2,5% sobre el valor base.
Si el peso está entre 75 y 500 gramos el costo del envío es el valor base.
Si el peso es superior a 500 gramos el costo tendrá un incremento del 7.5% sobre el valor base.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    float gramos,vbase=250;
    string tipo;
    while (true){
        
        cout << "costo de envio por paquete  \n";
        cout <<"digite el peso del paquete:  ";
        cin>>gramos;
        
        if (gramos<75){
            cout << "El costo del envio es="<<gramos*vbase-0.025*(gramos*vbase)<<"\n";
        }
        else if (gramos>=75 && gramos <=500){
            cout << "El costo del envio es="<<gramos*vbase<<"\n";
        }
        else if (gramos>500){
            cout << "El costo del envio es="<<gramos*vbase+0.075*(gramos*vbase)<<"\n";
        }
        
    }
    return 0;
}