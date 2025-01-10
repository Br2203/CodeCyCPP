#include <stdio.h>

/*
- Las variables estructura también las podemos definir de la siguiente forma
*/

struct planilla{
    char nombre[12];
    float peso;
    float altura;
    int edad;
}Ronald = {"Ronald",60,175,15};
//, Daniel;  //Estructura declarada pero para definir los miebros habrá que utilizar el operador '.' para cada miembro

int main(){
    struct planilla Daniel={"Daniel",65.5,162,54}; //De esta forma se puede definir una estructura
// La diferencia es que una se define dentro del main y la otra es global (TENGO QUE CONFIRMAR ESTA INFO)
    printf("%d\n",Ronald.edad);
    printf("%s\n",Daniel.nombre);
    return 0;
}
