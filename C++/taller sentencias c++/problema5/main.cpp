/*
Crear un programa en C++ que permita calcular y escribir la velocidad promedio de un vehículo, dada la distancia recorrida en kilómetros y el tiempo en horas.
*/
#include <iostream>
#include <string>
using namespace std;
#include <math.h>
int main() {
    float distanciakm=0,tiempohoras=0;
    float velocidad;
    printf("velocidad de un vehiculo\n");
    printf("Ingrese la distancia en kilometros: ");
    scanf("%f",&distanciakm);
    printf("Ingrese el tiempo es horas: ");
    scanf("%f",&tiempohoras);
    velocidad=distanciakm/tiempohoras;
    printf("el valor de la velocidad es igual a = %.f km/h  \n",velocidad);
    
    
    return 0;
}