#include <iostream>
using namespace std;

//Bucle for
int main(){

    int x=0;
    cout<<"Ingresa el número de bucles: ";
    cin>>x;
    cout<<"\n\n";

    for(int i=x; i>0; i--){
    cout<<"Bucle N°: "<< (x-i+1) <<endl;

    }

    return 0;

}
