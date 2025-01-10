#include <stdio.h>

//Bucle while
int main (){

    int x=0;
    printf("Ingresa cuántos números deseas imprimir: ");
    scanf("%d", &x);
    printf("\n\n");

    while(x){
        printf("%d\n",x);
        x--;
    }

    return 0;
}
