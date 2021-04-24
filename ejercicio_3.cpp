
#include <iostream>
using namespace std;

int main(){
    long long n=1,num=600851475143; // declaramos nuestras variables 
    while(n < num){ // mientras n sea menor num
        if(num%n==0 && n != num)  // condicion si  num es multiplo de n  y cuando sean diferentes
            num=num/n; //se divide el numero entre el numero de veces que haya recorrido el ciclo osea n
        n++; // aumentamos n cada que no cumpla la condicion
    }
    cout<<"El resultado es "<<num; // imprimimos el valor en pantalla
    return 0;
}
