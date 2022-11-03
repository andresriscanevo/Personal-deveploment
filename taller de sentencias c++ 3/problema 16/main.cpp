/*
La Facultad de Ingeniería de la Universidad tiene las siguientes tarifas para sus programas: 
                        Código Programa Valor
                        ICI     Ing. Civil $5.410.000
                        IIN     Ing. Industrial $5.161.000
                        IMC     Ing. en Mecatrónica $6.251.000
                        IML     Ing. Multimedia $5.491.000
                        ITL     Ing. Telecomunicaciones $5.349.000
                        IAM     Ing. Ambiental $5.006.000
                        IBM     Ing Biomédica $5.464.000
Crear un programa que permita leer el código del programa, calcular e imprimir el valor a pagar teniendo en cuenta que:
- Si presenta el certificado de institucionalidad tiene un descuento del 30%
- Si presenta el certificado electoral, tiene un descuento del 10% adicional
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    float civil=5410000,industrial=5161000,mecatronica=6251000,multimedia=5941000,telecomunicaciones=53490000,ambiental =50060000,biomedica=5464000;
    string codigo, institucional,electoral;
    float desinstitucional,deselectoral;
    while (true){
        cout << "presenta el certificado de institucionalidad (SI/NO)  \n";
            cin>>institucional;
            cout << "tiene certificado electoral(SI/NO):";
            cin>>electoral;
            if (electoral=="SI"){
                deselectoral=0.1;
            }
            else{
                deselectoral=0;
            }
            if (institucional=="SI"){
                desinstitucional=0.3;
            }
            else{
                desinstitucional=0;
            }
        cout << "Pago de matricula  \n";
        cout <<"digite el codigo del programa:  ";
        cin>>codigo;        
        if(codigo=="ICI"){
            cout << "el valor total de matricula es"<<civil-civil*desinstitucional-civil*deselectoral<<"\n";
            
        }
        else if(codigo=="IIN"){
            cout << "el valor total de matricula es"<<industrial-industrial*desinstitucional-industrial*deselectoral<<"\n";
            
        }
        else if(codigo=="IMC"){
            cout << "el valor total de matricula es"<<mecatronica-mecatronica*desinstitucional-mecatronica*deselectoral<<"\n";
            
        }
        else if(codigo=="IML"){
            cout << "el valor total de matricula es"<<multimedia-multimedia*desinstitucional-multimedia*deselectoral<<"\n";
            
        }
        else if(codigo=="ITL"){
            cout << "el valor total de matricula es"<<telecomunicaciones-telecomunicaciones*desinstitucional-telecomunicaciones*deselectoral<<"\n";
            
        }
        else if(codigo=="IAM"){
            cout << "el valor total de matricula es"<<ambiental-ambiental*desinstitucional-ambiental*deselectoral<<"\n";
            
        }
        else if(codigo=="IBM"){
            cout << "el valor total de matricula es"<<biomedica-biomedica*desinstitucional-biomedica*deselectoral<<"\n";
            
        }
        else{
            cout<< "codigo incorrecto";
        }
    }
        
    
    return 0;
}