/*
Desarrollar un programa en C++ que mediante 
una función usuario booleana evalúe si un número entero digitado por teclado es primo
*/
#include <iostream>
#include <string>
using namespace std;
#include <math.h>
bool primoono(int num){
    if (num==4 || num==1 || num==0 ){
        return false;
    }
    for (int i=2;i<num/2;i++){
        if (num%i==0){
            return false;
        }
        
    }
    return true;
}

int main() {
    double number,primono;
    while (true){
        cout<<"\n Digite el numero para determinar si es primo o no :";
        cin>>number;
        primono=primoono(number);
        if (primono==true){
            cout<< "el numero "<<number<<" es primo";
        }
        else{
            cout<< "el numero "<<number<<" no es primo";
        }
        
    }
    return 0;
}
