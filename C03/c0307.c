#include <stdio.h>
// Las variables tipo char ocupan 1B
// En C no existe el tipo String, pero podemos emular esta clase mediante un arreglo de caracteres

int main (){
    char m='a';
    char n=97;
    char p[]="Hola";  // Definir el arreglo bajo esta forma añade un caracter nulo 
    char q[]={'H','o','l','a'};
    char r[]={'H','o','l','a',0};
    printf("Imprimiendo caracteres. char m='a': %c , tamano: %ld\n",m,sizeof(m));
    printf("Imprimiendo caracteres. char n=97: %c , tamano: %ld\n",n,sizeof(n));
    printf("Imprimiendo desde p: %s -> %ldB\n",p,sizeof(p));
    printf("Imprimiendo desde q: %s -> %ldB\n",q,sizeof(q));
    printf("Imprimiendo desde r: %s -> %ldB\n",r,sizeof(r));
    return 0;
}
