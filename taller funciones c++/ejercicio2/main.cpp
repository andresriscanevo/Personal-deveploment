/*
Elaborar un programa en C++ que, mediante una función de usuario, calcule el factorial de 10 números digitado por teclado
*/
/*
Elaborar un programa en C++ que, mediante una función de usuario, calcule el factorial de 10 números digitado por teclado
*/
/*
Desarrollar un programa en C++, que llame una función tipo VOID 
para ordenar en forma ascendente e imprimir, tres números enteros, solicitados por teclado desde el programa principal
*/
#include <iostream>
#include <string>
using namespace std;
#include <math.h>
int arr[10];
int factorial[10]={1,1,1,1,1,1,1,1,1,1};
int resfactorial;
int factorialfn(int x){
    int resfactorial=1;
    for (int j=1;j<=x;j++){
        resfactorial=resfactorial*j;
    }
    return resfactorial;
}
void funcion(){
    
    for (int i=1;i<=10;i++){
        cout << "digita elnumero "<<i<<": ";
        cin>>arr[i];
    }
    
    //respuesta
    for (int i=1;i<=10;i++){
        
        cout<< "el factorial del numero "<<arr[i]<<" es "<<factorialfn(arr[i])<<"\n";
    }
}
int main() {
    
    while (true){
        funcion();
    }
    return 0;
}
