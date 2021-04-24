#include <iostream>
using namespace std;

int main(){
    int a=1,b=2,aux=0,suma=0,n=4000000;  // declaramos nuestras variables
    while(b<=n){ // Mientras b sea menor que n
        aux=a+b; // el auxiliar almacena la suma de a y b
        a=b;    // a tomara el valor de b
        b=aux;    // asignamos el valor de b por el auxuliar
        if(a%2==0)  // condicion, si a es multiplo de 2 que serian pares
            suma+=a;   // se sumara ese valor, el cual es par
    }
    cout<<suma; // imprimimos el valor en pantalla
}

    
