/*
Realizar un programa en C++ que solicite un numero entero y a continuación presente el siguiente menú de opciones:
La opción 1 llama una función que determina si el número es par o impar. 
La opción 2 llama una función que calcula el cuadrado del número si éste es un número positivo par 
    en caso contrario el cubo del número
*/


#include <iostream>
#include <string>
using namespace std;
#include <math.h>

bool parimpar(int decimal1){
    
    if (decimal1%2 == 0) {
        return true;
    }
    else{
        return false;
    }    
    
}
int calculo(double decimal2){
    if (decimal2>0) {
        return decimal2*decimal2;
    }
    if (decimal2<0) {
        return decimal2*decimal2*decimal2;
    }    

}

int main() {
    
    int opc;
    double numero;
    while (true){
        
        
        cout<<"Menu de ocpciones : \n 1 par o impar \n 2 calculo \n digite opcion: \n ";
        cin>>opc;
        cout<<"digita tu numero ";
        cin>>numero;
        switch (opc)
        {
        case 1:
            if(parimpar(numero)==true){
                cout<<"el numero es par  \n";
            }
            else {
                cout<<"el numero es impar  \n";
            }
            break;
        case 2:
            
            cout<<"el calculo es "<<calculo(numero)<<"  \n";
            break;
        
        default:
            break;
        }
    }
    return 0;
}