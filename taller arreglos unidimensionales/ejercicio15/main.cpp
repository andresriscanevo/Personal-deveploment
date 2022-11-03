/*
Realizar un programa que contiene una matriz [5][4] que es llenada por el usuario 
con las altura o tamaño de un grupo de plantas, calcular y escribir el promedio de
 la altura de todas las plantas, la cantidad de plantas con altura superior al 
 promedio, cantidad de plantas con altura por debajo del promedio, altura mayor y altura menor.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    double matriz[5][4];
    double alturamenor=matriz[0][0],sumatoria=0,promedio,altsuperiorprom,altinferiorprom,alturamayor=matriz[0][0];
    for (int k=0;k<5;k++){
        for (int j=0;j<4;j++){
            cout << "digita la altura o el tamaño"<<k+1<<"-"<<j+1<<" : ";
            cin >> matriz[k][j];
        }
        cout<<"\n";
        }
    for (int k=0;k<5;k++){
        for (int j=0;j<4;j++){
            
            cout << matriz[k][j]<<" ";
        }
        cout<<"\n";
        }
    for (int k=0;k<5;k++){
        for (int j=0;j<4;j++){
            sumatoria=sumatoria+matriz[k][j];
    
            }
        }
    promedio=sumatoria/20;
    for (int k=0;k<5;k++){
        for (int j=0;j<4;j++){
            if (matriz[k][j]>=promedio){
                altsuperiorprom=altsuperiorprom+1;
            }
            if(matriz[k][j]<promedio){
                altinferiorprom=altinferiorprom+1;
            }
            if(matriz[k][j]>alturamayor){
                alturamayor=matriz[k][j];
            }
            if(alturamenor>matriz[k][j]){
                alturamenor=matriz[k][j];
            }
            }
        }
    cout<<"\n";
    cout<< "el promedio de la altura de todas las plantas es   "<<promedio<<"\n";
    cout<< "la cantidad de plantas con altura superior al promedio es "<<altsuperiorprom<<"\n";
    cout<<"la cantidad de plantas con altura inferior al promedio es "<<altinferiorprom<<"\n";
    cout<<"la altura mayor es "<<alturamayor<<"\n";
    cout<<"la altura menor es "<<alturamenor<<"\n";
    
    return 0;
}