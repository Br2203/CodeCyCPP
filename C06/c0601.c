#include <stdio.h>

//Bucle Do-While
int main (){

    int x=0;
    printf("Ingrese cuántos números se van a imprimir: ");
    scanf("%d", &x);
    printf("\n\n");

    do{
    printf("%d\n", x);
    x--;
    }
    while(x);
    return 0;
}
