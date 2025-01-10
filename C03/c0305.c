/*
Modificadores:
    short     2 bytes
    long     8 bytes

    signed   **Por defecto las variables son signed
    unsigned
*/

#include <stdio.h>

int main (){
    short int a= 10;
    long int b= -5;
    unsigned int x= 2147483649;
    printf("Variable con modificador short: %d con dimension %ld\n",a,sizeof(a));
    printf("Variable con modificador long: %ld con dimension %ld\n",b,sizeof(b));
    printf("Variable con modificador unsigned: %u con dimension %ld\n",x,sizeof(x));
    return 0;
}
