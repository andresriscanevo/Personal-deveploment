/*
Realizar un programa en C++ que ingrese un número entero de 3 cifras por teclado,
 forme el mayor número posible con las cifras del número ingresado y lo imprima.
  El número formado debe tener el mismo signo que el número ingresado. 
  Validar que el número tenga tres dígitos. Ejemplo: Si se ingresa el número 358, 
  el mayor número que se puede formar es 853.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    int numero, numeromaximo,unidades;
    int decenas,centenas,min,max,mid,n;
    while (true){
        
        cout << "numero entero de tres cifras  \n";
        cout <<"digite un numero entero de tres cifras: ";
        cin>>numero;
        if ((numero>=100 && numero<=999)|| (numero>=-999 && numero <=100)){
            n=numero;
            if (numero<0){
                numero=-1*numero;
            }
            centenas = numero/100;
            decenas = (numero%100)/10;
            unidades = (numero%100)%10;
            min=centenas;
            if (decenas<min){
                min=decenas;
            }
            if (unidades<min){
                min=unidades;
            }
            max=centenas;
            if (decenas>max){
                max=decenas;
            }
            if (unidades>max){
                max=unidades;
            }
            mid=centenas+decenas+unidades-max-min;
            if (n>0){
                numeromaximo=max*100+mid*10+min;
                cout << "el numero maximo formado es="<<numeromaximo<<"\n";
            }
            else if(n<0){
                numeromaximo=-1*(max*100+mid*10+min);
                cout << "el numero maximo formado es="<<numeromaximo<<"\n";
            }
        }
        else {
            cout << "el numero ingresado no tiene 3 cifras";
        }    
    }
    return 0;
}