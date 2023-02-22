//leer 10 numeros y guardarlos en un arreglo
#include <iostream>
#include <string>
using namespace std;
int main() {
    int arre[10];
    for (int i=1;i<=10;i++){
        cout << "digita el numero "<<i<<": ";
        cin >> arre[i];

    }
    cout << "El arreglo guardado: \n";
    for (int j=1;j<=10;j++){
        
        cout << arre[j];
        cout <<"\n";
    }
    return 0;
}