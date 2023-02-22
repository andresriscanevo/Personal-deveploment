/*
Calcular la sumatoria, la media aritmética, el mayor y el menor valor de 
los números contenidos en un vector V de 12 elementos cuyos datos se introducen por teclado
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    int v[12];
    double mediaaritmetica,sumatoria=0,nmayor,nmenor;    
    for (int i=1;i<=12;i++){
        cout << "digita el numero "<<i<<": ";
        cin >> v[i];
    } 
    for (int j=1;j<=12;j++){
        sumatoria=sumatoria+v[j];
    }
    mediaaritmetica=sumatoria/12;
    for (int k=1;k<=12;k++){
        if (v[k]>nmayor){
            nmayor=v[k];
        }
        
    }
    for (int j=1;j<=12;j++){
        
        if (v[j]<nmenor){
            nmenor=v[j];
        }
    }
    cout <<"\n";
    for (int k=1;k<=12;k++){
        cout << v[k]<<" ";
    }
    cout<<"\n";
    cout<< "el valor de la sumatoria del arreglo de 12 posiciones es "<<sumatoria<<"\n";
    cout<< "el valor de la media aritmetica del arreglo de 12 posiciones es "<<mediaaritmetica<<"\n";
    cout<< "el numero mayor del arreglo de 12 posiciones es "<<nmayor<<"\n";
    cout<< "el numero menor del arreglo de 12 posiciones es "<<nmenor<<"\n";
    return 0;
}