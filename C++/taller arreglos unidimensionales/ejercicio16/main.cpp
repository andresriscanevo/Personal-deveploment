/*
Un almacén vende 4 productos diferentes en 3 sucursales ubicadas 
en 3 zonas distintas de la ciudad. La siguiente tabla presenta la producción diaria (en miles) de cada zona.
Capturar por teclado los datos por producto y por zona, almacenarlos en un arreglo
− Determinar la Zona con la mayor producción
− Determinar la menor producción por Producto
− Sumar y mostrar los promedios de producción por zona (por columnas)
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    double matrizalmacen[4][3];
    double zona1=0,zona2=0,zona3=0,producto1=0,producto2=0,producto3=0,producto4=0, menorproduct;
    char zonamay,productmin;
    for (int k=0;k<4;k++){
        for (int j=0;j<3;j++){
            cout << "digita el producto"<<k+1<<"de la zona"<<j+1<<" : ";
            cin >> matrizalmacen[k][j];
        }
        cout<<"\n";
        }
    for (int k=0;k<4;k++){
        for (int j=0;j<3;j++){
            
            cout << matrizalmacen[k][j]<<" ";
        }
        cout<<"\n";
        }
    for (int k=0;k<4;k++){
        for (int j=0;j<3;j++){
            zona1=zona1+matrizalmacen[k][1];
            zona2=zona2+matrizalmacen[k][2];
            zona3=zona3+matrizalmacen[k][3];
            }
        }
    for (int k=0;k<4;k++){
        for (int j=0;j<3;j++){
            producto1=producto1+matrizalmacen[1][j];
            producto2=producto2+matrizalmacen[2][j];
            producto3=producto3+matrizalmacen[3][j];
            producto4=producto4+matrizalmacen[4][j];
            }
        }
    if (zona1>zona2 || zona1>zona3){
        zonamay='zona1';
    }
    else if (zona2>zona1 || zona2>zona3){
        zonamay='zona2';
    }
    else if (zona3>zona1 || zona3>zona2){
        zonamay='zona3';
    }
    //productos
    if (producto1<producto2 || producto1<producto3 || producto1<producto4){
        productmin='producto1';
    }
    else if (producto2<producto1 || producto2<producto3 || producto2<producto4){
        productmin='producto2';
    }
    else if (producto3<producto1 || producto3<producto2 || producto3<producto4){
        productmin='producto3';
    }
    else if (producto4>producto1 || producto4>producto2 || producto4<producto3){
        productmin='producto4';
    }
    cout<<"\n";
    cout<< "la zona con mayor produccion es   "<<zonamay<<"\n";
    cout<< "la menor produccion por producto es  "<<productmin<<"\n";
    cout<<"los promedios de produccion por zona son zona1 "<<zona1<<" zona2 "<<zona2<<" zona3 "<<zona3<<"\n";
    
    
    return 0;
}