/*
Crear un programa que permita calcular e imprimir el valor a pagar por el servicio
 que ofrece una Operadora de TV por Cable según el número de canales en la Parrilla,
  el número de decodificadores y servicios adicionales por Cable según la siguiente 
  información: Referencia Servicio - Combo Valor
1 Triple Play 1 (157 canales) $124.000
2 Triple Play 2 (201 canales) $157.000
Canales adicionales de HBO $29.000
Canales adicionales de FOX $31.000
decodificador adicional $11.000
El programa debe solicitar al usuario el tipo de combo que va a adquirir y que indique si va a contratar canales y decodificadores adicionales.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    float tripleplay,canaladHBO=29000,decoadi=11000,foxadicio=31000,chbo,cfox,cdec,valortotal,;
    string triple1,triple2;
    while (true){
            cout << "desea triple play 1(SI/NO)  ";
            cin>>triple1;
            cout << "desea triple play2 (SI/NO):";
            cin>>triple2;
            if (triple1=="SI"){
                tripleplay=124000;
            }
            else{
                tripleplay=0;
            }
            if (triple2=="SI"){
                tripleplay=157000;
            }
            else{
                tripleplay=0;
            }
            cout << "cuantos canales adicionales hbo desea sino desea marcar 0  ";
            cin>>chbo;
            cout << "cuantos canales adicionales fox desea sino desea marcar 0  ";
            cin>>cfox;
            cout << "cuantos decodificadores adicionales  desea sino desea marcar 0  ";
            cin>>cdec;
            valortotal=tripleplay+chbo*canaladHBO+cfox*foxadicio+cdec*decoadi;
            cout<<"el valor total es: "<<valortotal<<"/n";
        
    }
        
    
    return 0;
}