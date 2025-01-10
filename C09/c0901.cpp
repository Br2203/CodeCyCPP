#include <iostream>
using namespace std;

/* RECURSIVIDAD */

int factorial(int);

int main(){
    int x;
    cout<<"Ingresa un número entero: ";
    cin>>x;
    cout<<">>El factorial de "<<x<<" es: "<<factorial(x)<<endl;
}

int factorial(int n){
    int p;
    if(n>0){
        p=n*factorial(n-1);
    }
    else{
    p=1;
    }
    return p;
}
