/*
Desarrollar un programa en C++, que llame una función tipo VOID 
para ordenar en forma ascendente e imprimir, tres números enteros, solicitados por teclado desde el programa principal
*/
#include <iostream>
#include <string>
using namespace std;
#include <math.h>

void funcion(){
    int a,b,c;
    cout << "digita tres numeros\n";
    cin>>a,b,c;
    if (a>b && a>c){
        if (b>c){
            cout<<"el orden es "<<c<<" "<<b<<" "<<a<<"\n";
        }
        else {
            cout<<"el orden es "<<b<<" "<<c<<" "<<a<<"\n";
        }
    }
    else if (b>a && b>c){
        if (c>a){
            cout<<"el orden es "<<a<<" "<<c<<" "<<b<<"\n";
        }
        else{
            cout<<"el orden es "<<c<<" "<<a<<" "<<b<<"\n";
        }
        
    }
    else if(c>a && c>b){
        if (b>a){
            cout<<"el orden es "<<a<<" "<<b<<" "<<c<<"\n";
        }
        else{
            cout<<"el orden es "<<b<<" "<<a<<" "<<c<<"\n";
        }
    }
}
int main() {
    float c=0.0,grados=0.0;

    while (true){
        funcion();
    }
    return 0;
}