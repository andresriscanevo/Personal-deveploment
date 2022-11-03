/*
10.	Un fondo de pensiones requiere un programa para validar los requisitos que debe cumplir un afiliado
para el reconocimiento del derecho a pensión de vejez dado el sexo (F/M), edad y numero de semanas cotizadas y sabiendo que:
        - Hombre, 62 años y 1300 semanas cotizadas. “Derecho a pensión de vejez” 
        - Mujer, 57 años y 1300 semana cotizadas. “Derecho a pensión de vejez” 
- En caso contrario aun no cumple con todos los requisitos exigidos para el reconocimiento a del derecho a la pensión de vejez.
El programa a través de un mensaje debe permitir repetir el proceso.

*/
#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main() {
    float edad,numsemcot;
    string sexo, consulta;
    string domi;
    while (true){
        
        cout << "FONDO DE PENSIONES \n";
        cout <<"digite su edad \n";
        cin>>edad;
        cout <<"digite el genero \n";
        cin>>sexo;
        cout <<"digite el numero de semanas cotizadas \n";
        cin>>numsemcot;
        if((sexo=="M" && edad>=62 && numsemcot>=1300) || (sexo=="F" && edad>=57 && numsemcot>=1300)){
            cout<<"Derecho a pensión de vejez \n"; 
        }
        else{
            cout<<" Sin Derecho a pensión de vejez \n ";
        }
        cout <<"desea realizar otra consulta (SI/NO) \n";
        cin>>consulta;
        if(consulta=="SI"){
            continue;; 
        }
        else if(consulta=="NO"){
            break;
        }
    }
}