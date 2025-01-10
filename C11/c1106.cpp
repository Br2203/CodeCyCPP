#include <iostream>
//#include <stdio.h>
#include <string.h>
using namespace std;

struct paciente{
    char nombre[15];
    int edad;
    float peso;
};

struct paciente genPcnt(char *, int, float);
void prntDatos(struct paciente *);

///////////////////////////////////////////////

int main(){
    struct paciente oscar= genPcnt("Oscar",27,75.1); // C++ ENVIA ALERTAS AL CONVERTIR la cadena "" a char*
    struct paciente edgardo= genPcnt("Edgardo",35,67.3);
    prntDatos(&oscar);
    cout<<endl;
    prntDatos(&edgardo);
    return 0;
}

///////////////////////////////////////////////

struct paciente genPcnt(char *nombre, int edad, float peso){
    struct paciente h;
    strcpy(h.nombre, nombre);
    h.edad=edad;
    h.peso=peso;
    return h;
}

void prntDatos(struct paciente *h){
    cout<<"Nombre: "<<h->nombre<<endl;
    cout<<"Edad: \t"<<h->edad<<endl;
    cout<<"Peso: \t"<<h->peso<<endl;

}
