#include <stdio.h>
#include <string.h>

struct paciente{
    char nombre[15];
    int edad;
    float peso;
};

struct paciente genPcnt(char *, int, float);
void prntDatos(struct paciente *);
////////////////////////////////////////////////////////////
int main(){
    struct paciente sergio= genPcnt("Sergio",34,78.5);
    struct paciente ricardo= genPcnt("Ricardo",45,86.3);
    prntDatos(&sergio);
    printf("\n");
    prntDatos(&ricardo);
    return 0;
}
////////////////////////////////////////////////////////////
struct paciente genPcnt(char *nombre, int edad, float peso){
    struct paciente h;
    strcpy(h.nombre,nombre);
    h.edad=edad;
    h.peso=peso;
    return h;
}

void prntDatos(struct paciente *h){
    printf("Nombre: %s\n", h->nombre);
    printf("Edad: \t%d\n", h->edad);
    printf("Peso: \t%f\n", h->peso);
}
