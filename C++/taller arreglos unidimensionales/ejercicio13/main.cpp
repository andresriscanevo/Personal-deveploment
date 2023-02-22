/*
Buscar un número digitado por teclado dentro de una matriz de 5 filas por 6 columnas:
− Si este número se encuentra se debe remplazar por un cero e imprimir la cantidad de veces que aparece.
− Si no se encuentra, imprimir un mensaje indicando que no se encontró.
Los datos se pueden generar aleatoriamente o ingresarlos en la definición de la matriz
*/
#include <iostream>
#include <iostream>
#include <string>
using namespace std;
int main() {
    double matriz[5][6], numero;
    cout <<" digite el numero a buscar dentro de la matriz ";
    cin >> numero;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matriz[i][j]=rand()%100;
        }
        cout<<"\n";
    }
    cout<<"matriz random  \n";
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"busqueda de matriz \n";
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            if (numero==matriz[i][j]){
                matriz[i][j]=0;
            }
            else{
                cout<<"no se encontro";
            }
            
        }
        
    }
    
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}