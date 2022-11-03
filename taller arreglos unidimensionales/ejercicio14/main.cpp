/*
Realizar un programa para crear una matriz de [4][3], que contiene las siguientes calificaciones
de un grupo de estudiantes: 3.5, 4.2, 3.7, 2.5, 1.7, 2.1, 4.5, 2.9, 3.1, 2.8, 2.2, 4.1. 
Calcular y escribir la nota mayor, la nota menor y el sitio donde se encuentra la nota menor.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    double matriznotas[4][3]={{3.5,4.2,3.7},{2.5,1.7,2.1},{4.5,2.9,3.1},{2.8,2.2,4.1}};
    double notamayor=matriznotas[0][0],notamenor=matriznotas[0][0],posnotamencol,posnotamenfil;
    for (int k=0;k<4;k++){
        for (int j=0;j<3;j++){
            cout<<matriznotas[k][j]<<" ";
        }
        cout<<"\n";
        }
        
    for (int k=0;k<4;k++){
        for (int j=0;j<3;j++){
            if (matriznotas[k][j]>notamayor){
            notamayor=matriznotas[k][j];
            }
            if (notamenor>matriznotas[k][j]){
            notamenor=matriznotas[k][j];
            posnotamencol=j;
            posnotamenfil=k;
            }
        }
    }

    cout<<"\n";
    cout<< "la nota mas alta es  "<<notamayor<<"\n";
    cout<< "la nota mas baja es "<<notamenor<<"\n";
    cout<<"la posicion de la nota mas baja es fila "<<posnotamenfil<<" columna "<<posnotamencol<<"\n";

    return 0;
}