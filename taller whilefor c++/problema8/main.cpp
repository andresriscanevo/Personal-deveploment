//8.  La siguiente tabla presenta la categoría de la EPS y el valor de la cuota moderadora correspondiente. CATEGORÍA C
//CATEGORÍA 		CUOTA 			SALARIO
//A 				$3.500 			Hasta 2 Salarios Mínimos
//B 				$11.500  		De 2 a 4 salarios Mínimos 
//C				$20.000		Más de 4 salarios mínimos 
//Nota: El programa termina cuando se digita como categoría el carácter X
//Cree un programa en C++ que permita leer la categoria de afiliación a la EPS para n usuarios  y muestre al usuario el valor de la cuota Moderadora. Al finalizar, el programa debe imprimir el numero total de usuarios por cada categoria y el monto total recibifo por concepto de cuotas moderadoras
//Nota. El programa termina cuanbdo se digita como categoria el caracter x 
#include <iostream>
using namespace std;
int main() {
    char Categoria=' ';
    int cuotaModeradora,CatA=0,CatB=0,CatC=0;
    do {
        printf("Digite su categoria:");
        scanf("%79s", &Categoria);
        switch(Categoria)
        {
            case 'A':
                cuotaModeradora=3500;
                CatA++;
                break;
            case 'B':
                cuotaModeradora=11500;
                CatB++;
                break;
            case 'C':
                cuotaModeradora=20000;
                CatC++;
                break;
            default:
                cuotaModeradora=0;
        }
        if(Categoria!='X'){
            printf("Para su categoria: %c El valor de cuota moderadora es de %i\n",Categoria,cuotaModeradora);
        }
    } while (Categoria!='X' );
    printf("Usuarios por categoria:\n  Categoria A: %i - Categoria B: %i - Categoria C: %i\n",CatA,CatB,CatC);
    printf("Monto total recibido por cuotas moderadoras: %i",(CatA*3500+CatB*11500+CatC*20000));
    return 0;
}