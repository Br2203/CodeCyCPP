#include <iostream>
using namespace std;

/* PUNTEROS PARA FUNCIONES
En C++ no se emplea tanto como en C, ya que este lenguaje integra otras herramientas que sustituyen su uso
*/

void dato(int *); // Procedimientos o tambien llamada funcion sin datos de retorno
int fact(int);

int main(){

    int a=0;
    int *q=NULL;

    int (*f)(int);
    f= &fact;

    q= &a;

    dato(q);
    cout<<"a: "<<a<<endl;
    cout<<"q: "<<q<<endl;
    cout<<">>Factorial: "<<f(a)<<endl;

    return 0;
}

void dato(int *t){
    cout<<"Ingresa el dato: ";
    cin>> *t;
}


int fact(int n){
    int p=1;
    for(int i=1; i<n; i++){
        p=p*(i+1);
    }
    return p;
}
