#include <stdio.h>

/* FUNCIONES RECURSIVAS
-Llamar a una función dentro de la misma función
-Se repite el bucle hasta ocupar todo el espacio de memoria asignado a una función
*/

void imprimir(int);

int main (){
    imprimir(0);
    return 0;
}

void imprimir(int x){
    printf("Hola %d\n", x);
    x++;
    imprimir(x);
//    printf("Hola %d\n", x); Con esto se podría invertir el orden de impresión pero hay que limitar el número bucles
//                            Xq sino rebasa antes de ejecutarse el primer printf()

}
