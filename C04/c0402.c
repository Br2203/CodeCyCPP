#include <stdio.h>

int main (){

    int x,y;
    float f,g;

    printf("INGRESA NÚMEROS ENTEROS\n");
    printf("Primer número: ");
    scanf("%d", &x);
    printf("Segundo número: ");
    scanf("%d", &y);
    printf("La suma es: %d\n", x+y);
    printf("La diferencia es: %d\n", x-y);
    printf("El producto es: %d\n", x*y);
    printf("El cociente es: %d\n", x/y);
    printf("El primero es mayor al segundo: %d\n", x>y);
    printf("El primero es menor al segundo: %d\n", x<y);
    printf("El primero es igual al segundo: %d\n\n", x==y);

    printf("INGRESA NÚMEROS DECIMALES\n");
    printf("Primer número: ");
    scanf("%f", &f);
    printf("Segundo número: ");
    scanf("%f", &g);
    printf("La suma es: %.2f\n", f+g);
    printf("La diferencia es: %.2f\n", f-g);
    printf("El producto es: %.3f\n", f*g);
    printf("El cociente es: %.3f\n", f/g);
    printf("El primero es mayor al segundo: %d\n", f>g);
    printf("El primero es menor al segundo: %d\n", f<g);
    printf("El primero es igual al segundo: %d\n", f==g);

    return 0;

}
