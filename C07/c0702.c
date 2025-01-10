#include <stdio.h>

/* NAME MANGLING

En C las funciones deben de tener nombres únicos

*/

int Srect(int,int);

/*
Es posible omitir el prototipo pero en esos casos se debe de definir la función
en el encabezado
*/


int main (){

    int a,b;
    printf("Cálculando el área de un rectángulo\n");
    printf("Ingresa la primera dimensión: ");
    scanf("%d", &a);
    printf("Ingresa la segunda dimensión: ");
    scanf("%d", &b);
    printf(">>El área del rectángulo es: %d\n", Srect(a,b));

    return 0;
}

int Srect(int x, int y){
    return x*y;
}
