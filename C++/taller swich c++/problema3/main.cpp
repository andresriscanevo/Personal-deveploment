/*Un restaurante requiere un programa para calcular y escribir el valor a pagar por un pedido dado el tipo de menú, así
Tipo de Menú Valor Unitario
A $9.500
B $12.500
C $16.000
El usuario debe selección el tipo de menú, la cantidad a solicitar e indicar si requiere la entrega 
a domicilio o no (S/N). Si el pedido es a domicilio se debe pagar por el empaque $500 por cada 
almuerzo y un recargo fijo de $3.500. Utilice la estructura switch en la solución.
*/
#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main() {
    float A=9500,B=12500,C=16000,cargofijo=3500,cantidad,vdomi;
    char opc;
    string domi;
    while (true){
        
        cout << "Restaurante  \n";
        cout <<"digite la opcion deseada:\n A  \n B \n C \n";
        cin>>opc;
        switch (opc)
        {
        case 'A':
            cout << "   Menu A \n ";
            cout << "Con un valor de $9500 digita la cantidad: ";
            cin >> cantidad;
            cout << "desea entrega a domicilio con valor adiciona c/d $500 (SI/NO)";
            cin >> domi;
            if (domi=="SI"){
                cout<<"el valor total es igual a: "<<cantidad*A+(cantidad*vdomi)+cargofijo<<"\n";
            }
            else if (domi=="NO"){
                cout<<"el valor total es igual a: "<<cantidad*A+cargofijo<<"\n";
            }
            break;
        case 'B':
            cout << "   Menu B \n ";
            cout << "Con un valor de $12000 digita la cantidad: ";
            cin >> cantidad;
            cout << "desea entrega a domicilio con valor adiciona c/d $500 (SI/NO)";
            cin >> domi;
            if (domi=="SI"){
                cout<<"el valor total es igual a: "<<cantidad*B+(cantidad*vdomi)+cargofijo<<"\n";
            }
            else if (domi=="NO"){
                cout<<"el valor total es igual a: "<<cantidad*B+cargofijo<<"\n";
            }
            break;
        case 'C':
            cout << "   Menu C \n ";
            cout << "Con un valor de $16000 digita la cantidad: ";
            cin >> cantidad;
            cout << "desea entrega a domicilio con valor adiciona c/d $500 (SI/NO)";
            cin >> domi;
            if (domi=="SI"){
                cout<<"el valor total es igual a: "<<cantidad*C+(cantidad*vdomi)+cargofijo<<"\n";
            }
            else if (domi=="NO"){   
                cout<<"el valor total es igual a: "<<cantidad*C+cargofijo<<"\n";
            }
            break;
        default:
            break;
        
        }    
    }
    return 0;
}