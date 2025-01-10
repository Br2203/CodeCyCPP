#include <stdio.h>
#include <string.h>

/* CADENA DE CARACTERES STRING */

int main(){
    char a[]="hola";
//    a[]="mudo";  Esta forma no sirve para redefinir los elementos de la cadena de caracteres
//    char a[]="mudo";  Tampoco sirve redefinir la variable xq ya existe un arreglo preexistente
    strcpy(a,"ola"); //A traves de esta función podemos redefinir una arreglo de caracteres
    printf("%s\n", a);

    printf("%p\n", a);
    printf("%p\n", &a[0]);
    printf("%p\n", &a[1]);
    printf("%p\n", &a[2]);

    printf("%lx\n", a);
    printf("%lx\n", a+1);
    printf("%lx\n", a+2);
    return 0;
}
