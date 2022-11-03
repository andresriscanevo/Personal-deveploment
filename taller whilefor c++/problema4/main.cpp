/*
4.	Elaborar un programa en C++ que lea 10 números y determine cuántos son positivos.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    float dato[10], positivos=0;
    while (true){
        cout << "numeros positivos \n"; 
        for (int i=1;i<=10;i++){
            cout <<"digite el numero "<<i<<": ";
            cin >>dato[i];
        }
        for (int i=1;i<=10;i++){
            if (dato[i]>0){
                positivos++;
            }  
        }
        cout <<"la cantidad de numeros positivos es "<<positivos<<"\n ";
    }
    return 0;
}