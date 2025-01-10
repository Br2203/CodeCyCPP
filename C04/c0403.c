#include <stdio.h>

int main (){

    int x;
    float y;

    printf("Ingresa números:\n");
    printf("Primer número: ");
    scanf("%d", &x);
    printf("Segundo número: ");
    scanf("%f", &y);

    printf("x: %d\n", x);
    printf("y: %.2f\n", y);

    if (x>y){
        printf("El primer número es mayor al segundo\n");
    }
    else if(x<y){
        printf("El primer número es menor al segundo\n");
    }
    else {
        printf("El primer número es igual al segundo\n");
    }





    return 0;

}
