/*Hay librerias para manejar enteros de forma mas precisa

int8_t   -->  Rango: [-128; 127]
int16_t  -->  Rango: [-32 768; 32 767]
int32_t  -->  Rango: [-2 147 483 648; 2 147 483 647]
uint8_t  -->  Rango: [0; 255]
uint16_t -->  Rango: [0; 65 535]
uint32_t -->  Rango: [0; 4 294 967 295]

*/

#include <stdio.h>
#include <stdint.h>

int main (){
    int x= 2147483647;
    int y= x+2;
    uint32_t z= x+2;
    printf("Imprimiendo variables en formato %s or %s y el espacio que ocupa en memoria:\n","%d","%ld");
    printf("Variable int x: %d or %ld ocupa un espacio de: %d\n",x,x,sizeof(x));
    printf("Imprimiendo x+2: %d or %ld ocupa un espacio de: %d\n",x+2,x+2,sizeof(x+2));
    printf("Variable int y=x+2: %d or %ld ocupa un espacio de: %d\n",y,y,sizeof(y));
    printf("Variable uint32_t z=x+2: %d or %ld ocupa un espacio de: %d\n",z,z,sizeof(z));
    z=x;
    z=z+1;
    printf("Imprimiendo z=x, z=z+1: %d or %ld ocupa un espacio de: %d\n",z,z,sizeof(z));
    uint32_t w=2147483648;
    printf("Imprimiendo uint32_t w=2147483648: %d or %ld ocupa un espacio de: %d\n",w,w,sizeof(w));
    return 0;
}
