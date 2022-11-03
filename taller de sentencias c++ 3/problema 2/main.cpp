/*
Una fábrica de bolsos requiere un programa que permita calcular e imprimir el costo
de elaboración de un producto dado el tipo de material (Tela T, Sintético S, Cuero C)
y la cantidad de metros y según la siguiente información: donde T=$3000,S=$12000,C=$15000
*/

#include <iostream>
#include <string>
using namespace std;
int main() {
    float cantidad=0.0,vT=3000,vS=12000,vC=15000;
    string tipo;
    while (true){
        
        cout << "fABRICA DE BOLSOS  \n";
        cout <<"digite el tipo de material: Tela=T,Sintetico=S,Cuero=C ";
        cin>>tipo;
        cout <<"digite la cantidad de metros: ";
        cin>>cantidad;
        if (tipo=="T"){
            cout << "El costo total es de $"<<cantidad*vT<<"\n";
        }
        else if (tipo=="S"){
            cout << "El costo total es de $"<<cantidad*vS<<"\n";
        }
        else if (tipo=="C"){
            cout << "El costo total es de $"<<cantidad*vC<<"\n";
        }
        else{
            cout<< "material desconocido\n";
        }
    }
    return 0;
}