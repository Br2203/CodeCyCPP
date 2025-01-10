#include <stdio.h>

/* Arreglos
- Estructura para almacer elementos del mismo tipo de manera contigua en la memoria
- Cada elemento tiene un orden único
*/

void printarray(int *, int);
void printarray(float *, int);
void printarray(char *, int);


int main(){

    int x=2;
    int y[]={3};
    int z[]={1, 2, 3};

    float p=2.4;
    float q[]={1.1, 2.2, 3.3};

    char a='h';
    char b[]={'h','o','l','a'};
    char c[]="hola";

//    int *t=NULL;
//    t=z;

    printf("Tamaño de x: %dB\n", sizeof(x));
    printf("Tamaño de y: %dB\n", sizeof(y));
    printf("Tamaño de z: %dB\n", sizeof(z));

    printf("Tamaño de p: %dB\n", sizeof(p));
    printf("Tamaño de q: %dB\n", sizeof(q));

    printf("Tamaño de a: %dB\n", sizeof(a));
    printf("Tamaño de b: %dB\n", sizeof(b));
    printf("Tamaño de c: %dB\n", sizeof(c));

    printf("\nARREGLO COMPLETO z: ");
    printarray(z,sizeof(z));

    printf("ARREGLO COMPLETO q: ");
    printarray(q,sizeof(q));

    printf("ARREGLO COMPLETO c: ");
    printarray(c,sizeof(c));


//    printf("Tamaño de x: %d, b: %d, a: %d\n", sizeof(x), sizeof(b), sizeof(a));

   return 0;
}

void printarray(int *p, int sz){
    for(int i=1; i<sz/4; i++){
        printf("%d ", p[i-1]);
    }
    printf("%d\n",p[(sz/4)-1]);
}

void printarray(float *p, int sz){
    for(int i=1; i<sz/4; i++){
        printf("%.2f ", p[i-1]);
    }
    printf("%.2f\n",p[(sz/4)-1]);
}

void printarray(char *p, int sz){
    for(int i=1; i<sz; i++){
        printf("%c", p[i-1]);
    }
    printf("%c\n",p[sz-1]);
}
