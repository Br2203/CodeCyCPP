#include <iostream>
using namespace std;

int main (){

    int x=0;
    cout<<"Elige una opción:\n";
    cout<<"Ingresa un número del 1 al 4: ";
    cin>>x;

    switch (x){
    case 1: cout<<"Elegiste la primera opción\n";
    break;
    case 2: cout<<"Elegiste la segunda opción\n";
    break;
    case 3: cout<<"Elegiste la tercera opción\n";
    break;
    case 4: cout<<"Elegiste la cuarta opción\n";
    break;
    }
    return 0;

}
