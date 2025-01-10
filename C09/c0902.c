#include <stdio.h>

int factorial(int);

int main(){
    int n=7;
    printf("%d!= %d\n", n, factorial(n));
    return 0;
}

int factorial(int n){
    if(n>0){ return n*factorial(n-1);}
    else{return 1;}
}
