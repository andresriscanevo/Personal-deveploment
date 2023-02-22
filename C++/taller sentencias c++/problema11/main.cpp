/*
Realizar un programa en C++ que convierta grados Celsius a Fahrenheit. 
El programa debe mostrar el resultado en pantalla.
*/
#include <iostream>
#include <string>
using namespace std;
#include <math.h>
#define  pi 3.14159265
int main() {
    float c=0.0,grados=0.0;

    cout << "grados celsius a fahrenheit \n";
    cout <<"digita los grados celsius: ";
    cin>>c;
    grados=c*9/5+32;
    cout <<"la magnitud  de grados celsius convertida a fahrenheis es "<< grados;
    return 0;
}