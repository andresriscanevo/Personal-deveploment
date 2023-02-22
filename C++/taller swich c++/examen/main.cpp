#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main() {
    float tipo1=9700,tipo2=215200,tipo3=10400,tipo4=21200,tipo5=31100,tipo6=39700;
    char opc;
    string domi;
    while (true){
        
        cout << "Restaurante  \n";
        cout <<"digite la tipo  del vehiculo:\n 1.Camperos,Automoviles,Camionetas  \n 2.buses y microbuses \n 3.camiones \n 4. camiones de dos ejes \n 5. camiones de tres ejes \n 6.camiones de 5 ojes o mas ";
        cin>>opc;
        switch (opc)
        {
        case 1:
            cout << "tipo 1 con valor="<<tipo1<<"\n";
            break;
        case 2:
            cout << "tipo 2 con valor="<<tipo2<<"\n";
            break;
        case 3:
            cout << "tipo 3 con valor="<<tipo3<<"\n";
            break;
        case 4:
            cout << "tipo 4 con valor="<<tipo4<<"\n";
            break;
        case 5:
            cout << "tipo 5 con valor="<<tipo5<<"\n";
            break;
        case 6:
            cout << "tipo 6 con valor="<<tipo6<<"\n";
            break;
        default:
            break;
        
        }    
    }
    return 0;
}