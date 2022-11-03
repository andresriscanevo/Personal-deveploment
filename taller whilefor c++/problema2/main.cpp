// 2.	Elaborar un programa en C++ que cuente los números naturales impares menores de 100.
#include <iostream>
using namespace std;
int main() {
    int cuenta=0;
    for(int i=1;i<100;i++){
        if (i%2!=0){
            cuenta++;
            //printf("%i",i);
        }
    }
    printf("Numéros impares: %i\n",cuenta);
    return 0;
}