/*
Llenar una matriz M de 3 X 3 y mostrar su traspuesta (la traspuesta se consigue intercambiando filas por columnas y viceversa)
*/
/*
Llenar una matriz M de 3 X 3 y mostrar su traspuesta (la traspuesta se consigue intercambiando filas por columnas y viceversa)
*/
#include <iostream>
#include <iostream>
#include <string>
using namespace std;
int main() {
    double M[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            M[i][j]=rand()%100;
        }
        cout<<"\n";
    }
    cout<<"matriz  \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<M[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"matriz traspuesta \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            M[i][j]=M[j][i];
        }
        
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<M[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}