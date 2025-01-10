#include <iostream>
using namespace std;

/*Paso de estructuras como argumento de función
A diferencia de los arreglos, cuando se pasa una estructura como argumento de funcion se genera una copia. Por lo tanto cualquier
modificación dentro de la función no afecta la estructura original
*/

struct team{
    char nombre[12];
    char color[10];
    int puntos;
    int puesto;
};

void prntDatos(struct team);

int main(){
    team peru={"Peru","rojo",21,4};
    prntDatos(peru);
    return 0;
}

void prntDatos(struct team h){
/*    printf("Nombre: %s\n",h.nombre);
    printf("Color: \t%s\n",h.color);
    printf("Puntos: %d\n",h.puntos);
    printf("Puesto: %d\n",h.puesto);
*/
    cout<<"Nombre: "<<h.nombre<<endl;
    cout<<"Color: \t"<<h.color<<endl;
    cout<<"Puntos: "<<h.puntos<<endl;
    cout<<"Puesto: "<<h.puesto<<endl;
}
