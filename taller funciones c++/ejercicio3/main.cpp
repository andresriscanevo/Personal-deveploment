/*
Crear un programa en C++, que utilice una función de usuario para calcular y mostrar la distancia en kilómetros que recorre un cuerpo en caída libre. El programa debe mostrar la distancia recorrida por el cuerpo cada segundo, durante 10 segundos
            𝑑=𝑔𝑡22
Donde:
d: Distancia recorrida por el cuerpo en segundos
g: Aceleración de la gravedad (9,8 m / seg2)
t: tiempo en segundos
*/
#include <iostream>
#include <string>
using namespace std;
#include <math.h>
double gravedad=9.81;
double distanciakm(double tiempo){
    double distancia;
    distancia=(gravedad*pow(tiempo,2))/(2);
    return distancia/1000;
}

int main() {
    double t,distancia;
    while (true){
        cout<<"Digite le tiempo para determinar la distancia de caida libre:";
        cin>>t;
        distancia=distanciakm(t);
        cout<< "la distancia recorrida en segundos es "<<distancia<<"km\n \n";
    }
    return 0;
}
