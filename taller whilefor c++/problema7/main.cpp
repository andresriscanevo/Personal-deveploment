// En la papelería de la universidad se venden 3 clases de artículos:
//           - Referencia: Papel (papeles y cartones) 
//- Referencia: Cuaderno (cuadernos y bloques de papel) 
//- Referencia: Marcador (lápices, esferos y plumones)
//Crear un programa en C++ que permita:
//- Leer la referencia de n productos, cantidad y precio del artículo. 
//- Calcular e imprimir el valor a pagar por cada artículo 
//- Acumular e imprimir la venta de todos los artículos 
//- Dar un informe del número de artículos vendidos de cada una de las referencias e imprimirlo.

#include <iostream>
using namespace std;
int main() {
    char Prod='Y';
    int Articulo,Cantidad,Precio;
    int Papeles[]={0,0},Cartones[]={0,0},Cuadernos[]={0,0},Bloques[]={0,0},Lapices[]={0,0},Esferos[]={0,0},Plumones[]={0,0};
    while(Prod=='Y'){
        printf("¿Nueva Producto (Y/N)?: ");
        scanf("%79s", &Prod);
        if(Prod=='N'|| Prod=='n'){
            Prod='N';
        }
        else{
            do {
                printf("¿Digite el numero del producto desea ingresar?: \n1.papeles \n2.Cartones\n3.Cuadernos\n4.Bloques de papel\n5.Lápices\n6.Esferos\n7.Plumones:\n");
                scanf("%i", &Articulo);
                printf("¿Cuantos de estos articulos hay?: ");
                scanf("%i", &Cantidad);
                printf("¿Cual es su precio unitario?: ");
                scanf("%i", &Precio);
                switch(Articulo){
                    case 1:
                        printf("El valor a pagar por articulos 'Papeles' es: %i \n",Cantidad*Precio);
                        Papeles[0]+=Cantidad;
                        Papeles[1]+=Precio;
                        break;
                    case 2:
                        printf("El valor a pagar por articulos 'Cartones' es: %i \n",Cantidad*Precio);
                        Cartones[0]+=Cantidad;
                        Cartones[1]+=Precio;
                        break;
                    case 3:
                        printf("El valor a pagar por articulos 'Cuadernos' es: %i \n",Cantidad*Precio);
                        Cuadernos[0]+=Cantidad;
                        Cuadernos[1]+=Precio;
                        break;
                    case 4:
                        printf("El valor a pagar por articulos 'Bloques de papel' es: %i \n",Cantidad*Precio);
                        Bloques[0]+=Cantidad;
                        Bloques[1]+=Precio;
                        break;
                    case 5:
                        printf("El valor a pagar por articulos 'Lápices' es: %i \n",Cantidad*Precio);
                        Lapices[0]+=Cantidad;
                        Lapices[1]+=Precio;
                        break;
                    case 6:
                        printf("El valor a pagar por articulos 'Esferos' es: %i \n",Cantidad*Precio);
                        Esferos[0]+=Cantidad;
                        Esferos[1]+=Precio;
                        break;
                    case 7:
                        printf("El valor a pagar por articulos 'Plumones' es: %i \n",Cantidad*Precio);
                        Plumones[0]+=Cantidad;
                        Plumones[1]+=Precio;
                        break;
                }
                
            } while (Articulo<0 && Articulo>8 );
            Prod='Y';
        }
    }
    printf("El valor total de venta de todos los articulos: %i \n",(Papeles[0]*Papeles[1])+(Cartones[0]*Cartones[1])+(Cuadernos[0]*Cuadernos[1])+(Bloques[0]*Bloques[1])+(Lapices[0]*Lapices[1])+(Esferos[0]*Esferos[1])+(Plumones[0]*Plumones[1]));
    printf("El valor a pagar por la referencia 'Papel' es: %i \n",(Papeles[0]*Papeles[1])+(Cartones[0]*Cartones[1]));
    printf("El valor a pagar por la referencia 'Cuaderno' es: %i \n",(Cuadernos[0]*Cuadernos[1])+(Bloques[0]*Bloques[1]));
    printf("El valor a pagar por la referencia 'Marcador' es: %i \n",(Lapices[0]*Lapices[1])+(Esferos[0]*Esferos[1])+(Plumones[0]*Plumones[1]));
    printf("El valor a pagar por el articulo 'Papeles' es: %i \n",(Papeles[0]*Papeles[1]));
    printf("El valor a pagar por el articulo 'Cartones' es: %i \n",(Cartones[0]*Cartones[1]));
    printf("El valor a pagar por el articulo 'Cuadernos' es: %i \n",(Cuadernos[0]*Cuadernos[1]));
    printf("El valor a pagar por el articulo 'Bloques' es: %i \n",(Bloques[0]*Bloques[1]));
    printf("El valor a pagar por el articulo 'Lapices' es: %i \n",(Lapices[0]*Lapices[1]));
    printf("El valor a pagar por el articulo 'Esferos' es: %i \n",(Esferos[0]*Esferos[1]));
    printf("El valor a pagar por el articulo 'Plumones' es: %i \n",(Plumones[0]*Plumones[1]));
    return 0;
    
}