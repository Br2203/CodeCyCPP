#include <stdio.h>
#include <string.h>

/*Paso de estructuras como argumento de función
A diferencia de los arreglos, cuando se pasa una estrucutra como argumento de una función se genera una copia. Por lo tanto cualquier
modificación dentro de la funición no afecta la estructura original
*/

struct team{
    char nombre[12];
    char color[10];
    int puntos;
    int puesto;
};

void prntDatos(struct team);

int main(){

    struct team peru={"Peru","rojo",21,4};
    prntDatos(peru);
    return 0;
}

void prntDatos(struct team h){
    printf("Nombre: \t%s\n", h.nombre);
    printf("Color: \t\t%s\n", h.color);
    printf("Puntos: \t%d\n", h.puntos);
    printf("Puesto: \t%d\n", h.puesto);
}
