/*
5.	Escribir un programa en C++, que permita crear un juego para adivinar en cinco intentos un número del 0 al 19. Se debe generar aleatoriamente el número a adivinar. Utilizar las funciones para generar números aleatorios y la instrucción break para interrumpir el juego si el usuario adivina antes de los 5 intentos.
Las funciones de biblioteca que generan números aleatorios:
    srand(time(NULL)); Generador de aleatorios
y = rand() % M; donde M es la cantidad de aleatorios
    #include Biblioteca

*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    float dato[10], positivos=0;
    int numeroadiv;
    while (true){
        numeroadiv=rand()%20;
        cout << "adivina el numero  \n"; 
        for (int i=1;i<=5;i++){
            cout <<"digite el numero "<<i<<": ";
            cin >>dato[i];
            if (dato[i]==numeroadiv){
                cout <<"has adivinado!!! \n";
                break;  
            }
            else{
                cout<<"intenta nuevamente\n";
                if (dato[i]==5){
                    cout<<"no lo lograste,intentalo nuevamente";
                }
            }
        }
        
    }
    return 0;
}