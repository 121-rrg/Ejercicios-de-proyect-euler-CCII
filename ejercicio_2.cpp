#include <iostream>
using namespace std;
int main(){
    int a=1,b=2,aux=0,suma=0;
    while(b<=4000000){
        aux=a+b;
        a=b;
        b=aux;
        if(a%2==0)
            suma+=a;
    }
    cout<<suma;
}

    