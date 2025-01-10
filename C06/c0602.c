#include <stdio.h>

//Bucle for
int main(){

    int x=0;
    printf("Ingresa el número de bucles: ");
    scanf("%d", &x);
    printf("\n\n");

    for (int i=x; i>0; i--){
        printf("Bucle N°: %d\n",x+1-i);
    }
    return 0;

}
