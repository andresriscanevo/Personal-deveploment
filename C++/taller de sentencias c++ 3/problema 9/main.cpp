/*Realizar un programa en C++ que lea dos números digitados por teclado 
y evalúe e imprima si el número menor digitado es divisor del número mayor digitado.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    int numero1, numero2;
    while (true){
        
        cout << "numero menor dividor del otro  \n";
        cout <<"digite el primer numero:  ";
        cin>>numero1;   
        cout <<"digite el segundo numero:  ";
        cin>>numero2;       
        if(numero1<numero2){
            if (numero2%numero1==0){
                cout << "el numero1= "<<numero1<<" es divisible por el numero2= "<<numero2<<"\n";
            }
            else{
                cout << "el numero1= "<<numero1<<" no es divisible por el numero2= "<<numero2<<"\n";
            }
        }
        else{
            if (numero1%numero2==0){
                cout << "el numero1= "<<numero2<<"es divisible por el numero2= "<<numero1<<"\n";
            }
            else{
                cout << "el numero1= "<<numero2<<" no es divisible por el numero2= "<<numero1<<"\n";
            }
        }
        
    }
        
    
    return 0;
}