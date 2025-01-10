#include <iostream>
using namespace std;

/* NAME MANGLING
C++ tiene la caracterísitca de permtir la sobrecarga de funciones, esto significa
que pueden existir varias funciones diferentes con el mismo nombre.
El compilador los diferencia las funciones mediante las variaciones en su argumento
*/


//Realizando pruebas, hay que ser muy cuidadoso cuando se trabaja con sobrecarga de funciones.
//En el caso que tengamos funciones con el mismo nombre y misma cantidad de argumentos, el retorno de las funciones debe ser diferente
//o los argumentos deben ser de diferente tipo; además para evitar confusiones en el compilador se recomienda que al llamar a la función
//se ingrese los datos a través de variables en el argumento; ya que estas variables se han definido previamente y el compilador reconoce
//fácilmente que tipo de dato está ingresando en los argumentos e identifica la función a la que estamos llamando.

float Area(int);
float Area(float);
float Area(float, float);

int main (){

    int l=5;
    float a=1.1;
    float b=8.2;
    printf("Llamando la función de 1 argumento int: %.3f\n",Area(l));
    printf("Llamando la función de 1 argumento: %.3f\n",Area(a));
    printf("Llamando la función de 2 argumentos: %.3f\n",Area(a,b));

    return 0;
}

float Area(int a){
    return a*a;
}

float Area(float a){
    return 3.14*a*a;
}

float Area(float a, float b){
    return a*b;
}
