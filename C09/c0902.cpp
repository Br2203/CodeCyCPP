#include <iostream>
using namespace std;

int factorial(int);

int main(){
    int n=6;
    cout<<n<<"!= "<<factorial(n)<<endl;
    return 0;
}

int factorial(int n){
    if(n>0){return n*factorial(n-1);}
    else{return 1;}
}
