/*
Calcular la suma de todos los elementos de una tabla T de 5 filas por 3 columnas que se asignan aleatoriamente a la matriz
*/
#include <iostream>
#include <iostream>
#include <string>
using namespace std;
int main() {
    double t[5][3],suma=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            t[i][j]=rand()%100;
        }
        cout<<"\n";
    }
    cout<<"matriz aleatoria \n";
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            suma=suma+t[i][j];
        }
        cout<<"\n";
    }
    cout<<"la suma de todos los elementos es  ";
    cout<<suma<<" \n";
    return 0;
}