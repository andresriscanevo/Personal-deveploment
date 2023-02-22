/*Utilizando la instrucción switch, crear un programa en C++ que calcule perímetros y 
áreas de figuras planas, luego de seleccionar la opción indicada según el siguiente menú:
1. Rectangulo 2. Circulo 3. Triangulo 4. Rombo 5. trapecio

*/
#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main() {
    float ladoa, ladob,ladoc,ladod,baseB,baseb,radio,pi=3.141695,base,altura,diagonalD,diagonald;
    int opc;
    
    while (true){
        
        cout << "Perimetros y areas  \n";
        cout <<"digite la opcion deseada:\n 1.Rectangulo \n 2.Circulo \n 3.Triangulo \n 4.Rombo \n 5.Trapecio \n";
        cin>>opc;
        switch (opc)
        {
        case 1:
            cout << "   Rectangulo\n ";
            cout << "digita el largo del rectangulo: ";
            cin >> ladoa;
            cout << "digita el ancho del rectangulo: ";
            cin >> ladob;
            cout << "\nEl perimetro del circulo es = "<<2*ladoa+2*ladob<<"\n";
            cout << "EL area del rectangulo es = "<<ladoa*ladob<<"\n";
            break;
        case 2:
            cout << "   Circulo\n ";
            cout << "digita el radio del circulo: ";
            cin >> radio;
            
            cout << "\nEl perimetro del circulo es = "<<2*radio*pi<<"\n";
            cout << "EL area del circulo es = "<<(pi)*(pow(radio,2))<<"\n";
            break;
        case 3:
            cout << "   Triangulo\n ";
            cout << "digita la base del Triangulo: ";
            cin >> base;
            cout << "digita la altura del Triangulo: ";
            cin >> altura;
            cout << "EL area del Triangulo es = "<<(base*altura)/2<<"\n";
            cout << "digita la longitud a del Triangulo: ";
            cin >> ladoa;
            cout << "digita la longitud b del Triangulo: ";
            cin >> ladob;
            cout << "digita la longitud c del Triangulo: ";
            cin >> ladoc;
            cout << "\nEl perimetro del Triangulo es = "<<ladoa+ladob+ladoc<<"\n";
            break;
        case 4:
            cout << "   Rombo\n ";
            cout << "digita la magnitud de la diadonal d del rombo: ";
            cin >> diagonald;
            cout << "digita la magnitud de la diadonal D del rombo: ";
            cin >> diagonalD;
            
            cout << "EL area del circulo es = "<<(diagonalD*diagonald)/2<<"\n";
            cout << "digita la longitud l del Triangulo: ";
            cin >> ladoa;
            cout << "\nEl perimetro del circulo es = "<<4*ladoa<<"\n";
            break;default:
            break;
        case 5:
            cout << "   Trapecio\n ";
            cout << "digita la longitud del lado a del trapecio: ";
            cin >> ladoa;
            cout << "digita la longitud del lado b del trapecio: ";
            cin >> ladob;
            cout << "digita la longitud del lado c del trapecio: ";
            cin >> ladoc;
            cout << "digita la longitud del lado d del trapecio: ";
            cin >> ladod;
            cout << "\nEl perimetro del trapecio es = "<<ladoa+ladob+ladoc+ladod<<"\n";
            cout << "digita la longitud de base mayor B del trapecio: ";
            cin >> baseB;
            cout << "digita la longitud de base menor b  del trapecio: ";
            cin >> baseb;
            cout << "digita la altura del trapecio: ";
            cin >> altura;
            cout << "EL area del trapecio es = "<<(pi)*(pow(radio,2))<<"\n";
            break;
        
        
        }    
    }
    return 0;
}