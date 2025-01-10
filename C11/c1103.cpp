#include <iostream>
using namespace std;

typedef struct{
    char nombre[12];
    float peso;
    float altura;
    int edad;
}planilla;

int main(){
    planilla Ronald, Daniel; // En C++ no es necesario utilizar el alias pero se puede emplear la misma sintaxis
    Ronald={"Ronald",61.2,175,15}; // Se puede modificar los miembros de esta forma
    cout<<Ronald.nombre<<endl;
    return 0;
}
