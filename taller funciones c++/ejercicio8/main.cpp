/*
Realizar programa en C++ que muestre el siguiente menú en el que en cada opción se llame una función que desarrolle cada fórmula:
MENU DE OPCIONES
1. Par o Impar
2. Calculo
Digite opción:
MENU DE OPCIONES
1. Sumatoria
2. Producto
Digite opción:
FORMULAS
1. Ecuación Cuadrática
2. Distancia entre dos puntos
Digite opción:
*/
#include <iostream>
#include <string>
using namespace std;
#include <math.h>

float cuadratica(float a, float b, float c){
    
    float x1,x2;
    x1 = (-b + sqrt( (b*b) - (4*a*c))) / (2*a);
    x2 = (-b - sqrt( (b*b) - (4*a*c))) / (2*a);    
    cout << "los valores x1="<<x1<<" y x2= "<<x2<<"\n";
}
double distanciaentre2puntos(double puntoa_x, double puntoa_y,double puntob_x,double puntob_y){
    double distancia;
    distancia = sqrt(pow(puntob_x - puntoa_x, 2) + pow(puntob_y - puntoa_y, 2));
    return distancia;
}

int main() {
    
    int opc;
    
    while (true){
        float a, b,c,puntoa_x, puntoa_y, puntob_x, puntob_y;
        
        cout<<"FORMULAS : \n 1 Ecuacion cuadratica \n 2 Distancia entre opciones \n digite opcion: \n ";
        cin>>opc;
        switch (opc)
        {
        case 1:
            cout<<"digite el valor de a:";
            cin>>a;
            cout<<"digite el valor de b:";
            cin>>b;
            cout<<"digite el valor de b:";
            cin>>b;
            
            cout<<"La solucion a la ecuacion cuadratica es   \n"<<cuadratica(a,b,c)<<endl;
            
            break;
        case 2:
            cout<<"digite la coordenada x del punto a:";
            cin>>puntoa_x;
            cout<<"digite la coordenada y del punto a:";
            cin>>puntoa_y;
            cout<<"digite la coordenada x del punto b:";
            cin>>puntob_x;
            cout<<"digite la coordenada y del punto b:";
            cin>>puntob_y;
            cout<<"el distancia entre los puntos a y b  es "<<distanciaentre2puntos(puntoa_x, puntoa_y, puntob_x, puntob_y)<<"  \n";
            break;
        
        default:
            break;
        }
    }
    return 0;
}