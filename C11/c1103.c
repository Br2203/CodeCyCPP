#include <stdio.h>

/*Declarando estructura empleando un alias*/

typedef struct {
    char nombre[12];
    float peso;
    float altura;
    int edad;
}planilla;

int main(){
    planilla Ronald, Daniel={"Daniel",65.1,162.5,54};  //Empleando el alias con typedef se puede omitir la palabra "struct"
//    planilla Ronald={"Ronald",65.1,162.5,54}; En C Los miembros de la estructura no se pueen editar de esta forma
    printf("%s\n",Daniel.nombre);
    return 0;
}
