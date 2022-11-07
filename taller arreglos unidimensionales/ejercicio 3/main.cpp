/*
Llenar un arreglo con los números primos comprendidos entre 1 y 100 y mostrarlos en la pantalla
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    int A[100],aux=0,resi;
    
    for (int i=2;i<100;i++){
        resi=1;
        for(int j=2;j<i;j++){
            if (i%j==0){
                resi=0;   
            }
        }
        if (resi==1){
            A[aux]=i;
            aux=aux+1;
        }
    }
    cout << "los 100 numeros primos: \n";
    for (int j=0;j<aux;j++){
        cout << A[j];
        cout <<"\n";
    }
    return 0;
}