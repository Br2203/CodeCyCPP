#include <stdio.h>
#include <string.h>

/*Para optimizar el uso de memoria, cuando se utiliza estructuras como argumento, es conveniente utilizar punteros*/

struct team{
    char nombre[15];
    char color[12];
    int puntos;
    int puesto;
};

void prntDatos(struct team *);

int main(){
    struct team peru={"Peru","rojo",22,4};
    prntDatos(&peru);
    return 0;
}

void prntDatos(struct team *p){
    printf("Nombre: %s\n",p->nombre);
    printf("Color: \t%s\n",p->color);
    printf("Puntos: %d\n",p->puntos);
    printf("Puesto: %d\n",p->puesto);
}
