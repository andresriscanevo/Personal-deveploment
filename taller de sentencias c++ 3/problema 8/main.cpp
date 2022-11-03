/*Una compañía dedicada al alquiler de automóviles cobra un valor fijo de $350.000 
para los primeros 300 km de recorrido. Para más de 300 km y hasta 1000 km, cobra 
un valor adicional de $ 3.500 por cada kilómetro que exceda sobre 300 km. Para más 
de 1000 km cobra un valor adicional de $ 5.000 por cada kilómetro en exceso sobre 1000 km.
Los precios ya incluyen el 20% del impuesto general a las ventas (IVA). Diseñe un programa
en C++ que determine el valor total a pagar por el alquiler del automóvil y el valor del impuesto pagado.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    float kilometraje,iva=0.2;
    float kilo;
    while (true){
        
        cout << "alquiler de carros   \n";
        cout <<"digite el valor del kilometraje:  ";
        cin>>kilometraje;        
        if(kilometraje<=300){
            cout << "el valor total es de: $350000\n";
            cout << "el valor del impuesto es de: "<<350000*iva<<"\n";
        }
        else if(kilometraje>300 && kilometraje<=1000){
            kilo=kilometraje-300;
            cout << "el valor es de:"<< 350000+kilo*3500<<"\n";
            cout << "el valor del impuesto es de: "<<(350000+kilo*3500)*iva<<"\n";
            
        }
        else if (kilometraje>1000){
            kilo=kilometraje-1000;
            cout << "el valor es de:"<< 350000+kilo*5000<<"\n";
            cout << "el valor del impuesto es de: "<<(350000+kilo*3500)*iva<<"\n";
        }
    }
        
    
    return 0;
}