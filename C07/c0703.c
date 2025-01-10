#include <stdio.h>

/* PUNTEROS PARA FUNCIONES
Se utilizan en C cuando se trabaja con estructuras
*/


void dato(int *);  //Procedimientos o funciones sin datos de retorno
int fact(int);

int main(){

    int a=0;
    int *q=NULL;

//Declarando puntero de función
    int (*f)(int);
//    f= &fact; creo que con esto no funciona
    f = fact;

    q= &a;
    dato(q);
//    printf("%d\n", q);
//    printf("%d\n", a);
    f(a);

    return 0;
}

void dato(int *t){
    printf("Ingresa el dato: ");
    scanf("%d", t);
}


int fact(int n){

    int p=1;
    for(int i=1; i<n; i++){
        p=p*(i+1);
    }
    printf("%d\n", p);
    return p;
}
