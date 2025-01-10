#include <stdio.h> //Directivas
#define Y 2 //Esta directiva no crea variables, es una macro osea como una etiqueta

int main (){
    //Y = Y+1; Debido a que Y no es una variable 12=12+1 no tiene sentido
    int x; //Declaracion de la variable
    x = 10; //Definicion de la variable
    int a=2; //Las variables int reservan 4B de la memoria para almacenar valores en el rango de [-2 147 483 648; 2 147 483 647]
    printf("%d\n",x);
    // printf(a); Es incorrecto, solo se imprime codenas
    printf("Día: %d%d\n",Y,Y);
    //printf("Navidad: %d%d",Y,sizeof(x)); Compila pero no es una buena practica
    printf("Navidad: %d%ld\n",Y,sizeof(x)); //sizeof() retorna una variable tipo long unsigned int
    printf("Y: %d\n",Y); //Esto lo hice por probar, no se si es mala practica
    return 0;
}
