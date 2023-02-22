/*
Realizar un programa en C++ con una función para calcular el valor del contrato de un docente 
según el número de horas semanales dictadas y la categoría así:
                                    CATEGORÍA VALOR DE LA HORA
                                        A           $35.570
                                        B           $42.870
                                        C           $46.510
                                        D           $64.880 
Además, tener en cuenta que el docente se contrata por 18 semanas y que para ser contratado 
el número de horas semanales no puede ser superior a 19 horas semanales.
*/
#include <iostream>
#include <string>
using namespace std;
#include <math.h>

float calculocontrato(char categoria,double nhoras){
    float valor,va=35570,vb=42870,vc=45610,vd=64880;
    if(nhoras<=19){
        switch (categoria)
        {
        case 'A':
            valor=va*nhoras;
            return valor;
            break;
        case 'B':
            valor=va*nhoras;
            return valor;
            break;
        case 'C':
            valor=va*nhoras;
            return valor;
            break;
        case 'D':
            valor=va*nhoras;
            return valor;
            break;
        default:
            break;
        }
    }
    else{
        cout<<"el numero de horas supera el numero de horas semanales "<<endl;
    }
    
}


int main() {
    
    char opc;
    double nhoras;
    while (true){
        
        
        cout<<"categoria  : \n A= $35.570 \n B= $42.870 \n C= $46.510 \n D= $64880\n";
        cout<<"digita la opcion: ";
        cin>>opc;
        cout<<"\ndigita el numero de horas contratadas: ";
        cin>>nhoras;
        cout<<"el valor total del contrato es $ "<<calculocontrato(opc,nhoras)<<"\n";
        
    }
    return 0;
}