/* 
En ANSI C no existe el tipo de datos booleanos ya que se tratan como enteros
pero existe una libreria que nos permite trabajarlo como si fuera un tipo de dato
*/
#include <stdio.h>
#include <stdbool.h>

int main (){
    bool x= true;
    bool y= false;
    printf("Variable booleana x: %d , %ldB\n",x,sizeof(x));
    printf("Variable booleana y: %d , %ldB\n",y,sizeof(y));
}
