/*
1.	Elaborar un programa en C++ que imprima una tabla de multiplicar hasta el 10, dado el número multiplicando digitado por teclado.

*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    float numero;
    
    while (true){
        
        cout << "tabla de multiplicar  \n";
        cout <<"digite el numero:  ";
        cin>>numero;        
        for (int i=1;i<=10;i++){
            cout<< numero <<"*"<<i<<"="<<numero*i<<"\n";
        }   
    }
    return 0;
}