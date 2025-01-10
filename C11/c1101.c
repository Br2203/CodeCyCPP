#include <stdio.h>
#include <string.h>

/* ESTRUCTURAS
- Colección de multiples variables(miembros)
- Los miembros pueden ser de diferenentes tipos de dato(estrutura heterongénea)
- Se le considera un tipo de dato de registro
*/

// DECLARAR ESTRUCTURA
struct planilla{
    char nombre[12];
    float peso;
    float altura;
    int edad;
};

int main(){
// Declaración del dato tipo "estructura planilla"
    struct planilla Ronald, Daniel;  // En C no se puede omitir el "struct" cuando se declara la estructura de esta forma
//  planilla Ronald, Daniel; no es correcto ya que hace falta la palaabra "struct"

    strcpy(Ronald.nombre, "Ronald");
    Ronald.peso= 65;
    Ronald.altura= 170;
    Ronald.edad= 15;

    printf("Nombre: %s\nEdad: %d\nAltura: %.1f\n",Ronald.nombre,Ronald.edad,Ronald.altura);

    return 0;
}
