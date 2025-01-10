#include <iostream>
using namespace std;

//Punteros
int main (){

    int i,j;
    int *p=NULL;
    int *q=NULL;

    cout<<"Ingresa un número: ";
    cin>>i;

    p = &i;

    cout<<"i: "<<i<<endl;
    cout<<"p: "<<p<<endl;
    cout<<"*p: "<<*p<<endl;

    return 0;


}
