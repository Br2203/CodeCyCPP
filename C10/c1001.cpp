#include <iostream>
using namespace std;

/*ARREGLOS
- Los arreglos son estructuras para almacenar elementos del mismo tipo en espacios de memoria contiguos
- Cada elemento tiene un orden único
*/

int main(){
    int x=9;
    int y[]={5};
    int z[]={2,3,4};

    float p=6.4;
    float q[]={1.2,2.4,3.6};

    char a='z';
    char b[]={'m','u','n','d','o'};
    char c[]="mundo";  // Esta es otra forma de expresar una cadena de caracteres, estos terminan con el caracter nulo '\0'

    cout<<"Tamaño de x: "<<sizeof(x)<<"B\n";
    cout<<"Tamaño de y: "<<sizeof(y)<<"B\n";
    cout<<"Tamaño de z: "<<sizeof(z)<<"B\n";

    cout<<"Tamaño de p: "<<sizeof(p)<<"B\n";
    cout<<"Tamaño de q: "<<sizeof(q)<<"B\n";

    cout<<"Tamaño de a: "<<sizeof(a)<<"B\n";
    cout<<"Tamaño de b: "<<sizeof(b)<<"B\n";
    cout<<"Tamaño de c: "<<sizeof(c)<<"B\n";

    return 0;
}
