#include <iostream>
using namespace std;

int main () {

    int x,y;
    float f,g;

    cout<<"INGRESAR NÚMEROS ENTEROS:\n";
    cout<<"Primer número: ";
    cin>>x;
    cout<<"Segundo número: ";
    cin>>y;
    cout<<"La suma es: "<< x+y << endl;
    cout<<"La diferencia es: "<< x-y << endl;
    cout<<"El producto es: "<< x*y << endl;
    cout<<"El cociente es: "<< x/y << endl;
    cout<<"El primero es mayor al segundo: "<< (x>y) << endl;
    cout<<"El primero es menor al segundo: "<< (x<y) << endl;
    cout<<"El primero es igual al segundo: "<< (x==y) << endl<<endl;

    cout<<"INGRESAR NÚMEROS DECIMALES:\n";
    cout<<"Primer número: ";
    cin>>f;
    cout<<"Segundo número: ";
    cin>>g;
    cout<<"La suma es: "<< f+g << endl;
    cout<<"La diferencia es: "<< f-g << endl;
    cout<<"El producto es: "<< f*g << endl;
    cout<<"El cociente es: "<< f/g << endl;
    cout<<"El primero es mayor al segundo: "<< (f>g) << endl;
    cout<<"El primero es menor al segundo: "<< (f<g) << endl;
    cout<<"El primero es igual al segundo: "<< (f==g) << endl;

    return 0;

}

