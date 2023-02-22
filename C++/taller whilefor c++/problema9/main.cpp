/*
Elaborar un programa en C++ que permita para n vehículos, leer la distancia recorrida (en km) 
y el tiempo de desplazamiento (en horas), calcular la velocidad y determinar
- Cuantos de los conductores son infractores, exceden la velocidad máxima permitida de 80 km/h. 
- Calcular el promedio de velocidad de los infractores 
- Determinar la máxima velocidad detectada 
Nota: El programa termina cuando se digita una distancia de 0 km

*/
#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main() {
    float edad,numsemcot,velocidad,promvel,velmax=0;
    float numvehi;
    float dkm[100],td[100];
    int univel=0;
    string estado;
    while (true){
        
        cout << "VELOCIDAD  \n";
        cout <<"digite el numero de vehiculos que va a registrar \n";
        cin>>numvehi;
        
        for (int i=0;i<numvehi;i++){
            cout <<"digite la distancia recorrida(km) \n";
            cin>>dkm[i];
            if(dkm[i]==0){
                break;
            }
            cout <<"digite el tiempo de desplazamiento(horas) \n";
            cin>>td[i];
            velocidad=dkm[i]/td[i];
            if (velocidad>80){
                univel=+1;
            }
        }
        cout << "la cantidad que sobrepaso la velocidad de 80 km/h "<<univel<<"\n";
    
        promvel+=velocidad/numvehi;
    
        
        
        for (int j=0;j<numvehi;j++){

            if(numvehi<promvel){
                numvehi=promvel;
            cout<< "la maxima velocidad detectada es igual a "<<numvehi<<"\n";
            }
        }
        cout<< "el promedio es igual a "<<promvel/numvehi<<"\n";
        
    }
}