#include <stdio.h>

int main (){

    int x=0;
    printf("Elige una opción:\n");
    printf("Ingresa un número del 1 al 4: ");
    scanf("%d", &x);

    switch (x){
    case 1: printf("Elegiste la primera opción\n");
    break;
    case 2: printf("Elegiste la segunda opción\n");
    break;
    case 3: printf("Elegiste la tercera opción\n");
    break;
    case 4: printf("Elegiste la cuarta opción\n");
    break;

    }

    return 0;

}
