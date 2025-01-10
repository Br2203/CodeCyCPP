#include <stdio.h>

/* FUNCIONES

Declaracion de prototipos

funcion main{
    llamada de función
}

Definición de función

*/


int suma(int x, int y); //PROTOTIPO
// int suma(int x=2, int=3);  En C no funciona definir variables por defecto en la función
// Los argumentos se deben de definir al llamar la función

int main (){

    int x=0;
    printf("Función main\n");
    x=suma(5,3); //LLAMADA DE FUNCION
    printf("Imprimiendo resultado desde la función main: %d\n", x);

    return 0;
}

int suma(int x, int y){  //DEFINICION DE FUNCION
    int s=0;
    s=x+y;
    printf("Imprimiendo desde la definición de la función --> suma= %d\n",s);
    return s;
}
