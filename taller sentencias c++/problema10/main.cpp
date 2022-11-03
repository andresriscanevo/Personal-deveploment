/*
Realizar un programa en C++, que calcule y escriba la superficie total de un cilindro recto:
Área del Cilindro: 𝑆=2𝜋𝑟ℎ+ 2𝜋𝑟2
Declarar pi como constante = 3.14159265
*/
#include <iostream>
#include <string>
using namespace std;
#include <math.h>
#define  pi 3.14159265
int main() {
    float r=0.0,h=0.0,s=0.0;

    cout << "superficie total de un cilindro recto \n";
    cout <<"digita la magnitud de la altura: ";
    cin>>h;
    cout <<"digita la magnitud del radio: ";
    cin>>r;
    
    s=2*pi*r*h+2*pi*pow(r,2);
    cout <<"la superficie total del cilindro recto es= "<< s;
    
    
    return 0;
}