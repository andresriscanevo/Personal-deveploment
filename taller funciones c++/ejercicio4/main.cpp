/*
Crear un programa en C++, que permita realizar las siguientes conversiones. 
El programa debe contener el menú de opciones, una función de usuario por cada opción para realizar los cálculos
    1 decimal a binario
    2 decimal a octal
    3 decimal hexadecimal
    4 binario a decimal
    5 octal a decimal
    6 hexadecimal a decimal 
*/
/*
Crear un programa en C++, que permita realizar las siguientes conversiones. 
El programa debe contener el menú de opciones, una función de usuario por cada opción para realizar los cálculos
    1 decimal a binario
    2 decimal a octal
    3 decimal hexadecimal
    4 binario a decimal
    5 octal a decimal
    6 hexadecimal a decimal 
*/
#include <iostream>
#include <string>
using namespace std;
#include <math.h>

int dectobin(int decimal1){
    
    if (decimal1/ 2 != 0) {
        dectobin(decimal1 / 2);
    }    
    cout<< decimal1%2;
}
int dectooct(int decimal2){
    if (decimal2>7) {
        dectooct(decimal2 / 8);
    }    
    cout <<decimal2%8;
}
int dectohex(int decimal3){
    cout <<hex<<decimal3<<endl;
}
double bintodec(double binario ){
    int expo=0,dig=0;
    double decimal=0;
    while(((int)(binario/10))!=0)
    {
        dig = (int)binario % 10;
        decimal = decimal + dig * pow(2.0,expo);
        expo++;
        binario=(int)(binario/10);
    }
    decimal=decimal + binario * pow(2.0,expo);
    cout<<decimal<<endl;
    
}
int octtodec(int octal ){
    int decimal = 0, i = 0, aux;
    while (octal != 0)
    {
        aux = octal % 10;
        octal /= 10;
        decimal += aux * pow(8, i);
        ++i;
    }
    return decimal;
}
int hextodec(char hex){
    cout<<"hola";
}
int main() {
    
    int opc,numero;
    while (true){
        cout<<"digita tu numero ";
        cin>>numero;
        cout<<"Digite la opcion: \n 1 decimal a binario\n 2 decimal a octal \n 3 decimal hexadecimal\n 4 binario a decimal\n 5 octal a decimal\n 6 hexadecimal a decimal\n";
        cin>>opc;
        switch (opc)
        {
        case 1:
            cout<<"la conversion de decimal a binario es "<<dectobin(numero)<<"  \n";
            break;
        case 2:
            
            cout<<"la conversion de decimal a octal es "<<dectooct(numero)<<"  \n";
            break;
        case 3:
            
            cout<<"la conversion de decimal a hexadecimal es "<<dectohex(numero)<<"  \n";
            break;
        case 4:
            
            cout<<"la conversion de binario a decimal es "<<bintodec(numero)<<"  \n";
            break;
        case 5:
            
            cout<<"la conversion de octal a decimal es "<<octtodec(numero)<<"  \n";
            break;
        case 6:
            
            cout<<"la conversion de hexadecimal a decimal es "<<hextodec((char)numero)<<"  \n";
            break;
        default:
            break;
        }
    }
    return 0;
}