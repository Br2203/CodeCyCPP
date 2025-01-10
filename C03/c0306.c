/*
Variables flotantes
*/

#include <stdio.h>

int main (){
    float m= 17.5;
    double n= 13.1;
    printf("m en formato %s: %f con dimension %ld\n","%f",m,sizeof(m)); 
    printf("m en formato %s: %8.1f con una dimension %ld\n","%.1f",m,sizeof(m)); 
    printf("m en formato %s: %f con una dimension %ld\n","%f",n,sizeof(n)); 
    printf("m en formato %s: %.1lf con una dimension %ld\n","%.1lf",n,sizeof(n)); 


/*
    printf("Variable float con formato d: %d con una dimension %d\n",m,s);  //Intentar imprimir una variable float con formato %d
    printf("Variable float con formato f: %f con una dimension %d\n",m,s);  //genera varios problemas
    printf("Variable float con formato d: %d con una dimension %d\n",m,s); 
*/
    return 0;
}
