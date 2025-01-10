#include <iostream>
using namespace std;

/* FUNCIONES

Prototipo de función

int main(){
    Llamada de función
}

Definición de función

*/

int suma(int x, int y);  //PROTOTIPO DE FUNCION
//int suma(int x=1, int y=3);  En C++ se puede definir valores por defecto para eel argumento
// Eso significa que si al llamar la función no ingresamos datos en el argumento entonces la función empleaará los valores por defecto



int main(){

    int x=0;
    cout<<"Imprimiendo desde la función main"<<endl;
    x=suma(2,9);
    cout<<"Imprimiendo resultado de la función main: "<<x<<endl;

    return 0;
}

int suma(int x, int y){
    int s=0;
    s=x+y;
    cout<<"Imprimiendo desde la definición de función --> suma= "<<s<<endl;
    return s;
}
