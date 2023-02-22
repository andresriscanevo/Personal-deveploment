/*Utilizando la instrucción switch, desarrollar un programa en C++, que muestre la siguiente pantalla:
calculadora 1.Suma 2.Resta 3.Multiplicacion 4.Division 5.Potenciacion 6. Radicacion
El programa debe permitir seleccionar la opción del menú, leer dos números, realizar la operación respectiva,
imprimir los dos números y el resultado. En el caso 4, debe verificar que no se realice una división por cero, 
mostrando un mensaje si es el caso.*/
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main() {
    float num1,num2,sum,rest,mul,div,pot,rad;
    int opc;
    
    while (true){
        
        cout << "Calculadora  \n";
        cout <<"digite la opcion deseada:\n 1.Suma \n 2.Resta \n 3.Multiplicacion \n 4.Division \n 5.Potenciacion \n 6. Radicacion \n";
        cin>>opc;
        switch (opc)
        {
        case 1:
            cout << "   SUMA\n ";
            cout << "digita el primer numero: ";
            cin >> num1;
            cout << "digita el segundo numero: ";
            cin >> num2;
            cout << "la suma de "<<num1 <<" + "<<num2<<" es = "<<num1+num2<<"\n";
            break;
        case 2:
            cout << "   RESTA \n";
            cout << "digita el primer numero: ";
            cin >> num1;
            cout << "digita el segundo numero: ";
            cin >> num2;
            cout << "la resta de "<<num1 <<" - "<<num2<<" es = "<<num1-num2<<"\n";
            break;
        case 3:
            cout << "   MULTIPLICACION \n ";
            cout << "digita el primer numero: ";
            cin >> num1;
            cout << "digita el segundo numero: ";
            cin >> num2;
            cout << "la multiplicacion de "<<num1 <<" * "<<num2<<" es ="<<num1*num2<<"\n";
            break;
        case 4:
            cout << "   DIVISION \n";
            cout << "digita el primer numero: ";
            cin >> num1;
            cout << "digita el segundo numero: ";
            cin >> num2;
            if (num2==0){
                cout<<"ERROR NO ES POSIBLE DIGITAR POR CERO";
                break;
            }
            else {
                cout << "la division de "<<num1 <<" / "<<num2<<" es ="<<num1/num2<<"\n";
            }            
            break;
        case 5:
            cout << "   POTENCIACION\n ";
            cout << "digita el primer numero: ";
            cin >> num1;
            cout << "digita el segundo numero: ";
            cin >> num2;
            cout << "la resta de "<<num1 <<" - "<<num2<<" es ="<<pow(num1,num2)<<"\n";
            break;
        case 6:
            cout << "   RADICACION\n ";
            cout << "digita el primer numero: ";
            cin >> num1;
            cout << "digita el segundo numero: ";
            cin >> num2;
            cout << "la multiplicacion de "<<num1 <<" * "<<num2<<" es ="<<pow(num1,(1/num2))<<"\n";
            break;
        default:
            break;
        }    
    }
    return 0;
}