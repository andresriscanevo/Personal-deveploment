/*
Realizar un programa que contiene una función que calcula el subsidio familiar 
de un trabajador según el salario mensual y el número de hijos, así:

Número de hijos hasta 2 el subsidio es del 5% del salario mensual En caso contario el 3% del salario mensual
*/
#include <iostream>
#include <string>
using namespace std;
#include <math.h>
double subsidiofamiliar(int nhijos,double salariom){
    double sub;
    if (nhijos<2 ){
        sub=0.05;
    }
    else {
        sub=0.03;
    }
    return salariom*sub+salariom;
}

int main() {
    double subsidio,salariomensual;int nhijos;
    while (true){
        cout<<"\n Digite el numero de hijos :";
        cin>>nhijos;
        cout<<"\n Digite el salario mensual:";
        cin>>salariomensual;
        subsidio=subsidiofamiliar(nhijos,salariomensual);
        
        cout<<"\n el subsidio es : "<<subsidio<<endl;
    }
    return 0;
}
