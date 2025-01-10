#include <stdio.h>

/* RECURSIVIDAD */

int factorial(int);

int main(){
    int n=0;
    printf("Ingresa un número entero: ");
    scanf("%d", &n);
    printf(">>El factorial de %d es: %d\n",n,factorial(n));
    return 0;
}

int factorial(int n){
    int p;
    if(n>0){
        p=n*factorial(n-1);
    }
    else{
    p=1;
    }
    return p;

}
