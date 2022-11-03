/*
Realizar un programa para crear un vector en el que se almacenan los saldos de 
cada uno de los 12 meses del año de una cuenta de ahorro. Se lee la tasa de 
interés mensual y el saldo inicial que será almacenado en la primera posición
del vector y de allí en adelante el saldo será el saldo anterior más los intereses. 
Ejemplo: Tasa de interés mensual 0.01, con un saldo inicial $2.000.000
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    double cuentan[12],tasainteres,saldoinicial;
    cout << "digita la couta inicial: ";
    cin >> saldoinicial;
    cout << "digita la tasa de interes: ";
    cin >> tasainteres;
    for (int i=0;i<12;i++){
        cuentan[i]=i*tasainteres*saldoinicial+saldoinicial;
    }
    
    
    cout <<"valor a pagar \n";
    for (int k=0;k<10;k++){
        cout << cuentan[k]<<" ";
    }
    return 0;
}
