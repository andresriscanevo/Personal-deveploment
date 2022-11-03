/*
Declarar el Vector A de 7 posiciones con los datos:
Vector A:
7 34 23 4 5 6 8
Crear el Vector B desplazando hacia la derecha k posiciones el Vector A
Por ejemplo, si k = 2:
Vector B:
6 8 7 34 23 4 5
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    
    int vA[7]={7,34,23,4,5,6,8},vB[7];
    int k; 
    
    cout<<"cuanto quiere desplazar el vector: ";
    cin>>k;
    for (int i=6;i>k;i--){
        vB[i]=vA[i-1];
    } 
    
    cout <<"\n";
    for (int k=0;k<7;k++){
        cout << vA[k]<<" ";
    }
    cout<<"\n";
    for (int k=0;k<7;k++){
        cout << vB[k]<<" ";
    }
    cout<<"\n";

    return 0;
}