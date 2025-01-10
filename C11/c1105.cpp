#include <iostream>
using namespace std;

/*Para optimizar el uso de memoria, cuando se utilizan estructuras como argumento de una función, es conveniente hacer el uso de puntero*/

struct team{
    char nombre[12];
    char color[10];
    int puntos;
    int puesto;
};

void prntDatos(struct team *);

int main(){
    team peru={"Peru","rojo",22,3};
    prntDatos(&peru);
    return 0;
}

void prntDatos(struct team *p){
    cout<<"Nombre: "<<(p->nombre)<<endl;
    cout<<"Color: \t"<<(p->color)<<endl;
    cout<<"Puntos: "<<(p->puntos)<<endl;
    cout<<"Puesto: "<<(p->puesto)<<endl;
}
