#include <stdio.h>

//Punteros
int main (){

    int i,j;
    int *p=NULL;
    int *q=NULL;
    printf("Ingresa un número: ");
    scanf("%d", &i);

    p= &i;
    q= &j;

    printf("i: %d\n", i);
    printf("p: %X\n", p);
    printf("*p: %d\n\n", *p);

    printf("Ingresa un segundo número: ");
    scanf("%d", q);

    printf("j: %d\n", j);
    printf("q: %X\n", q);
    printf("*q: %d\n", *q);

    return 0;
}
