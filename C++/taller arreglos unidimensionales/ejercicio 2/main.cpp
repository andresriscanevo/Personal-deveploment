/*
Llenar un vector A con 15 enteros consecutivos, el 
valor del entero para la primera posición del arreglo 
entra por teclado.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    int number=0;
    int A[15];
    cout << "digita el numero:";
    cin>>number;
    for (int i=0;i<15;i++){
    
        number=number+1;
        A[i]=number;

    }
    cout << "El arreglo guardado: \n";
    for (int j=0;j<15;j++){
        
        cout << A[j];
        cout <<"\n";
    }
    return 0;
}