/*
Crear un vector V con las notas de los 10 alumnos de una clase y calcular e imprimir:
− La nota promedio
− La nota más alta
− La nota más baja
− Número de notas aprobatorias (tres o superior)
− Número de notas reprobatorias (menores a tres)
− Número de notas cuyo valor está por encima de la nota promedio
− Número de notas cuyo valor está por debajo de la nota promedio
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    double v[12];
    double npromedio,sumatoria=0,notaalta,notabaja,notasaprobatorias=0,notasreprobatorias=0,nnotaspromsub=0,nnotaspromabaj=0;    
    for (int i=1;i<=10;i++){
        cout << "digita la nota del alumno "<<i<<": ";
        cin >> v[i];
    } 
    for (int j=1;j<=10;j++){
        sumatoria=sumatoria+v[j];
    }
    npromedio=sumatoria/12;
    for (int k=1;k<=10;k++){
        if (v[k]>notaalta){
            notaalta=v[k];
        }  
    }
    for (int j=1;j<=10;j++){
        
        if (v[j]<notabaja){
            notabaja=v[j];
        }
        if (v[j]>=3){
            notasaprobatorias=notasaprobatorias+1;
        }
        if (v[j]<3){
            notasreprobatorias=notasreprobatorias+1;
        }
        if (v[j]>=npromedio){
            nnotaspromsub=nnotaspromsub+1;
        }
        if (v[j]<npromedio){
            nnotaspromabaj=nnotaspromabaj+1;
        }
    }
    cout <<"\n";
    for (int k=1;k<=10;k++){
        cout << v[k]<<" ";
    }
    cout<<"\n";
    cout<< "la nota promedio es  "<<npromedio<<"\n";
    cout<< "la nota mas alta es "<<notaalta<<"\n";
    cout<<"la nota mas baja es "<<notabaja<<"\n";
    cout<< "el numero de notas aprobatorias es "<<notasaprobatorias<<"\n";
    cout<< "el numero de notas reprobatorias es "<<notasreprobatorias<<"\n";
    cout<< "el numero de notas cuyo valor esta por encima del promedio "<<nnotaspromsub<<"\n";
    cout<< "el numero de notas cuyo valor esta por debajo del promedio "<<nnotaspromabaj<<"\n";
    return 0;
}