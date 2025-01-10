#include <iostream>
using namespace std;

int main (){

    int x;
    float y;
    cout<<"Ingresa números:\n";
    cout<<"Primer número: ";
    cin>>x;
    cout<<"Segundo número: ";
    cin>>y;

    cout<<"x: "<< x << endl;
    cout<<"y: "<< y << endl;

    if (x>y){
        cout<<">>El primer número es mayor al segundo\n";
    }
    else if (x<y){
        cout<<">>El primer número es menor al segundo\n";
    }
    else {
        cout<<">>El primer número es igual al segundo\n";
    }

    return 0;
}
