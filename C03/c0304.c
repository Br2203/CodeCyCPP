// Quiero entender que lo que ha estado ocurriendo en los dos anteriores proramas
#include <stdio.h>
#include <stdint.h>

int main (){
    int x=2147483647;
    int y=-2147483648;
    int w;
    int z;
    w=x*2;
    z=y*2;
    printf("x: %d or %ld, Size x: %d\n",x,x,sizeof(x));
    printf("y: %d or %ld, Size y: %d\n",y,y,sizeof(y));
    printf("w: %d or %ld, Size w: %d\n",w,w,sizeof(w));
    printf("z: %d or %ld, Size z: %d\n",z,z,sizeof(z));
}
