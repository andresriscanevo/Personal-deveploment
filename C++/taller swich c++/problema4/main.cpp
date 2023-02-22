/*Utilizando la instrucción switch, elaborar un programa en C++ para una tienda que 
embala regalos en varios tipos de empaques según el siguiente menú:
El programa debe solicitar las dimensiones del empaque e imprimir el valor a pagar, 
teniendo en cuenta que el valor por centímetro del empaque esférico es de $15, del 
empaque cónico es de $10 y del empaque cúbico es de $5.
*/
#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main() {
    float lado,radio,pi=3.141695,emesferico=15,emconico=10,emcubico=5,areaesferica,areaconica,areacubica,l;
    int opc;
    
    while (true){
        
        cout << "empaques \n";
        cout <<"digite la opcion deseada:\n 1.Esferico \n 2.conico \n 3.cubico\n";
        cin>>opc;
        switch (opc)
        {
        case 1:
            cout << "   esferico\n ";
            cout << "digita el radio: ";
            cin >> radio;
            areaesferica=4*pi*pow(radio,2);
            cout << "\nEl precio del empaque es = "<<areaesferica*emesferico<<"\n";
            break;
        case 2:
            cout << "   conico\n ";
            cout << "digita el radio: ";
            cin >> radio;
            areaconica=pi*radio*l+radio;
            cout << "\nEl precio del empaque es = "<<areaconica*emconico<<"\n";
            break;
        case 3:
            cout << "   cubico\n ";
            cout << "digita el lado: ";
            cin >> lado;
            areacubica=lado*lado*lado;
            cout << "\nEl precio del empaque es = "<<areacubica*emcubico<<"\n";
            break;
        default:
            break;
        
        
        }    
    }
    return 0;
}