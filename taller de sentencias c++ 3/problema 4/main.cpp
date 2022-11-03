/*Se requiere un programa para realizar la liquidación de la seguridad social por un 
contrato de prestación de servicio, dado el valor del contrato y sabiendo que:
Si el valor del contrato es menor o igual a un salario mínimo no debe cancelar seguridad social.
Si el valor del contrato supera el valor de un salario mínimo se calcula el 40% del valor del 
contrato para calcular el pago de la seguridad social. Si el resultado de esta operación arroja
menos de 1 salario mínimo, la seguridad social se liquida sobre el valor del salario mínimo, 
en caso contrario la seguridad social se liquida sobre ese valor.
Para la liquidación de la seguridad social (pensión, salud y ARL) se deben tener en cuenta los 
siguientes porcentajes que se aplican sobre el valor establecido anteriormente, así: 
        pensión (16%), salud (12.5%), ARL (0.0522%).
Se debe indicar e imprimir el valor a pagar por cada uno de estos conceptos.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    float valorcontrato,porpension=0.16,porsalud=0.125,porarl=0.000522;
    float pension=0,salud=0,arl=0, salariominimo=1000000,vsalminpago;
    while (true){
        
        cout << "liquidacion de seguridad social  \n";
        cout <<"digite el valor del contrato:  ";
        cin>>valorcontrato;        
        if(valorcontrato<=salariominimo){
            cout << "No cancela seguridad social\n";
        }
        else if(valorcontrato>salariominimo){
            vsalminpago=valorcontrato*0.4;
            if(vsalminpago<salariominimo){
            pension=porpension*salariominimo;
            salud=porsalud*salariominimo;
            arl=porarl*salariominimo;
            cout << "El costo total de pension es $"<<pension<<"\n";
            cout << "El costo total de salud es $"<<salud<<"\n";
            cout << "El costo total de arl es $"<<arl<<"\n";
            cout << "El costo total de seguridad social es $"<<pension+salud+arl<<"\n";
            }
            else {
                pension=porpension*vsalminpago;
                salud=porsalud*vsalminpago;
                arl=porarl*vsalminpago;
                cout << "El costo total de pension es $"<<pension<<"\n";
                cout << "El costo total de salud es $"<<salud<<"\n";
                cout << "El costo total de arl es $"<<arl<<"\n";
                cout << "El costo total de seguridad social es $"<<pension+salud+arl<<"\n";
            }
        }
    }
        
    
    return 0;
}