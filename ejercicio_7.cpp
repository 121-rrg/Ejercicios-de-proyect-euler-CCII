
#include <iostream>
using namespace std;

bool primo(long long a); // prototipo de las  funciones
long long num_primo(int b);

int main(){
    cout<<num_primo(10001); // llamamo a la funcion nu_primo
    return 0;
}
bool primo(long long a){ // implementacion de la funcion

    for(long long i=2;i<a;i++){ // emepzamos el for desde 2, ya que es el primer primo
        if(a%i == 0){       // si el numero es multiplo entre 2, no es primo
            return false;
        }
    }
    return true;  //De modo contrario si no es multiplo, es primo
}
long long num_primo(int b){ // implementacion de la funcion

    size_t inicio=0;  // asignamos un valor de inicio 0
    long long num=0;

    for(int i=2;inicio<b;i++){  // empezamos el for con 2 , pero inicio con 0
        if(primo(i)==true){  // la condicion es que si es primo, tomaremos ese valor 
            inicio++;          // en la variable num y inicio ira aumentando
            num=i;              // y almacenamos ese numero primo en num

        }
    }
    return num;  // retorna el mayor primo encontrado
}
