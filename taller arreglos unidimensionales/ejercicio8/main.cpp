/*
Realizar un programa en el que se crean dos vectores el primero es llenado por el usuario con el 
número de minutos consumidos por 8 usuarios durante un mes, el segundo vector es llenado con el 
valor a cancelar por cada uno de los usuarios según el número de minutos consumidos y sabiendo 
que el valor fijo es de $30.000 por los primeros 100 minutos, los minutos adicionales se pagan 
a $100 cada minuto. Mostrar los dos vectores.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    int valormin[10],valorpagado[10];
    
    for (int i=0;i<10;i++){
        cout << "digita el numero de minutos  "<<i<<": ";
        cin >> valormin[i];
    }
    
    for (int j=0;j<10;j++){
        if (valormin[j]>=100){
            valorpagado[j]=30000+(valormin[j]-100)*100;
        }
        else {
            valorpagado[j]=30000;
        }
        
    }
    for (int k=0;k<10;k++){
        cout << valormin[k]<<" ";
    }
    cout <<"valor a pagar \n";
    for (int k=0;k<10;k++){
        cout << valorpagado[k]<<" ";
    }
    return 0;
}
