#include <iostream>
#include <string>
using namespace std;

/* STRING 
- En C++ se ofrece este tipo de datos dentro de la librería std::string
- A diferencia de C, el tipo de dato string no es un arreglo de caracteres sino un objeto, lo que significa que tiene
  métodos y propiedades que se pueden utilizar para para interacturar con las cadenas.
*/

int main(){
    string a="Hola";
    cout<<a<<endl;
    a = a+ " mundo!";
    cout<<a<<endl;
    return 0;
}
