#include <iostream>
using namespace std;

struct planilla{
    char nombre[12];
    float peso;
    float altura;
    int edad;
}Ronald={"Ronald",60.1,175,15}
, Daniel;


int main(){
    Daniel={"Daniel",65.2,162,54}; // AL PARECER en C++ si esta permitido definir los miembros de esta manera
    cout<<Daniel.edad<<endl;
    return 0;
}
