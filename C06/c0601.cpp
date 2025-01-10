#include <iostream>
using namespace std;

//Bucle Do-While
int main (){

    int x=0;
    cout<<"Cuántos números desea imprimir: ";
    cin>>x;
    cout<<"\n\n";

    do{
    printf("%d\n",x);
    x--;
    }
    while(x);
    return 0 ;

}
