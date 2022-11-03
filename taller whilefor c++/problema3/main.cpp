/*3.	 Elaborar un programa en C++ para una Tienda que desea calcular el monto total de venta.
Se deben leer dos variables (costo unitario y cantidad vendida). Imprimir el valor de cada venta
y determinar el valor final de la venta si se realizan 10 ventas al día. Validar que no se registren
ventas ni cantidades negativas*/
#include <iostream>
using namespace std;
int main() {
    char Venta='Y';
    int CantVend,NumVenta=0;
    float costUni,TotalVenta=0;
    float costos[10],cantidades[10],Montos[10];
    while(Venta=='Y'   && NumVenta<10){
        printf("¿Nueva Venta (Y/N)?: ");
        scanf("%79s", &Venta);
        if(Venta=='N'|| Venta=='n'){
            Venta='N';
        }
        else{
            NumVenta++;
            do {
                printf("Venta: %i\n",NumVenta);
                printf("Digite el costo unitario:");
                scanf("%f", &costUni);
                printf("Digite el Cantidad vendida:");
                scanf("%i", &CantVend);
            } while (costUni<0 || CantVend<0 );
            Venta='Y';
            costos[NumVenta-1]=costUni;
            cantidades[NumVenta-1]=CantVend;
        }
        
            
        
    }
    for(int j=0;j<NumVenta;j++){
        Montos[j]=costos[j]*cantidades[j];
        printf("Venta %i con valor %f\n",j+1,Montos[j]);
        TotalVenta+=Montos[j];
    }
    if(NumVenta==10){
        printf("Valor final %f",TotalVenta);
    }
    return 0;
}