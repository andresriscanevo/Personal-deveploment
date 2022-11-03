/*
Realizar un programa en C++ que calcule e imprima el valor del IVA de un producto, 
conociendo el precio, cantidad y la clase de producto de acuerdo con los valores de la siguiente tabla: 
                Clase Tasa (%)
                0        0%
                1        6%
                2       12%
                3       19%
                4       30%
Si el usuario digita una clase diferente, el programa debe mostrar el mensaje “DATO ERRADO”.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    float clase=0,precio,cantidad;
    while (true){

        cout << "iva de un producto  \n";
        cout <<"digita la clase del producto ";
        cin>>clase;
        
        
        if (clase ==0){
            cout <<"digite el precio del producto ";
            cin>>precio;
            cout <<"digite la cantidad del producto ";
            cin>>cantidad;
            cout<<"el valor total es igual a "<<precio*cantidad+0*(precio*cantidad)<<"\n";
            
        }
        else if (clase ==0){
            cout <<"digite el precio del producto ";
            cin>>precio;
            cout <<"digite la cantidad del producto ";
            cin>>cantidad;
            cout<<"el valor total es igual a "<<precio*cantidad+0*(precio*cantidad)<<"\n";
            
        }
        else if (clase ==1){
            cout <<"digite el precio del producto ";
            cin>>precio;
            cout <<"digite la cantidad del producto ";
            cin>>cantidad;
            cout<<"el valor total es igual a "<<precio*cantidad+0.6*(precio*cantidad)<<"\n";
            
        }
        else if (clase ==2){
            cout <<"digite el precio del producto ";
            cin>>precio;
            cout <<"digite la cantidad del producto ";
            cin>>cantidad;
            cout<<"el valor total es igual a "<<precio*cantidad+0.12*(precio*cantidad)<<"\n";
            
        }
        else if (clase ==3){
            cout <<"digite el precio del producto ";
            cin>>precio;
            cout <<"digite la cantidad del producto ";
            cin>>cantidad;
            cout<<"el valor total es igual a "<<precio*cantidad+0.19*(precio*cantidad)<<"\n";
            
        }
        else if (clase ==4){
            cout <<"digite el precio del producto ";
            cin>>precio;
            cout <<"digite la cantidad del producto ";
            cin>>cantidad;
            cout<<"el valor total es igual a "<<precio*cantidad+0.3*(precio*cantidad)<<"\n";
            
        }
        else {
            cout <<" DATO ERRADO \n";
        }
        }
    
    }
