/*
Crear un arreglo M de 6 filas por 6 columnas, inicializarlo con 0, 
escribir el arreglo de ceros (0) fila por fila, después remplazar 
los elementos de la diagonal principal con unos (1), mediante código, 
y, escribir nuevamente el arreglo (matriz idéntica) fila por fila
*/
#include <iostream>
#include <iostream>
#include <string>
using namespace std;
int main() {
    double m[6][6]={{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0}};
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cout<<m[i][j];
        }
        cout<<"\n";
    }
    m[0][0]=1;
    m[1][1]=1;
    m[2][2]=1;
    m[3][3]=1;
    m[4][4]=1;
    m[5][5]=1;
 
    cout<<"matriz identidad \n";
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cout<<m[i][j];
        }
        cout<<"\n";
    }
    cout<<"matriz identica \n";
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(i==j){
                m[i][j]=2;
            }
            cout<<m[i][j];
        }
        cout<<"\n";
    }
    return 0;
}