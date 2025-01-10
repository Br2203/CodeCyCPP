#include <iostream>
using namespace std;

/* FUNCIONES RECURSIVAS

*/

void imprimir(int);

int main(){

    imprimir(10);
    return 0;
}

void imprimir(int x){
    printf("%d\n",x);  //Si comentamos esta línea y descomentamos el siguiente printf() podemos invertir el orden de impresion
    if (x>0){
        imprimir(x-1);
    }
//    printf("%d\n",x);
}
