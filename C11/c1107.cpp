#include <iostream>
using namespace std;

/*Funciones como miembro de una estructura: Simil a los métodos en python*/

struct paciente{
    char nombre[15];
    int edad;
    float peso;

    void presentar(){
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Edad: \t"<<edad<<endl;
        cout<<"Peso: \t"<<peso<<endl;
    }
};

////////////////////////////////////////////////////

int main(){
    struct paciente javier= {"Javier", 15, 63.1};
    javier.presentar();
    return 0;
}
