#include <stdio.h>
#include <string.h>

/*Funciones miembro de estructuras: Simil a los métodos en Python
A diferencia de C++, en C no hay soporte para integrar funciones como miembro de una estrcutura. En su lugar se puede intentar simular
este comportamiento mediante punteros a función... pero a opinión personal no le veo un uso práctico.
*/

struct paciente{
    char nombre[15];
    int edad;
    float peso;

    void (*f)(struct paciente);
};

void presentar(struct paciente h){
    printf("Nombre: %s\n", h.nombre);
    printf("Edad: \t%d\n", h.edad);
    printf("Peso: \t%f\n", h.peso);
}

/////////////////////////////////////////////////////////////////

int main(){
    struct paciente fernando = {"Fernando", 27, 83.7};
    fernando.f=presentar;
    fernando.f(fernando);
    //presentar(fernando);
    return 0;
}
