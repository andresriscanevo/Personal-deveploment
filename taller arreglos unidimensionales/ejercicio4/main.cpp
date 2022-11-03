/*
Realizar un programa en el que se crean dos arreglos cada uno almacena 10 números enteros. 
El primer arreglo es llenado por el usuario, el segundo se llena termino a término según el 
contenido del primer arreglo así: Si el número en el primer arreglo es par, en el segundo 
arreglo se asigna el cuadrado de ese número, en caso contrario el cubo del número. Mostrar 
el contenido final de los dos vectores.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    int arr1[10],arr2[10];
    
    for (int i=0;i<10;i++){
        cout << "digita el numero "<<i<<": ";
        cin >> arr1[i];
    }
    
    for (int j=0;j<10;j++){
        if (arr1[j]%2==0){
            arr2[j]=arr1[j]*arr1[j];
        }
        else {
            arr2[j]=arr1[j]*arr1[j]*arr1[j];
        }
        
    }
    for (int k=0;k<10;k++){
        cout << arr1[k]<<" ";
    }
    cout <<"\n";
    for (int k=0;k<10;k++){
        cout << arr2[k]<<" ";
    }
    return 0;
}