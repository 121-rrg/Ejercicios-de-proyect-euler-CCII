#include <iostream>
using namespace std;

long long collatz(long long num); // prototipo de funcion

int  main (){
    long long num_cadena_larga=0 ; // declaramos nuestras variables
    long long cadena_larga=0 ;
    
    for (int i=1;i<1000000;++i){ // iniciamos nuestro for de 1 a menor que 1000000
        if (collatz(i)>cadena_larga){ // condicion si mi numero es mayor que cadena_larga
            num_cadena_larga=i;       // cadena_larga tomara el valor de numero que genera el collatz mas grande
            cadena_larga=collatz(i);   // agregamos el valor de collat< a cadena_larga para la siguiente pasada
        }
    }
    cout<<num_cadena_larga; //imprimimos el valor en pantalla
    return 0;
}

long long collatz(long long num){ // implementacion de la funcion
    long long num_grande=0;    // declaramos nuestras variables
    while (num != 1){  // mientras  num sea diferente a 1, que es donde terminara el loop
        num = (num%2==0)?(num/2):(num*3)+1;    //condicional ternario si num es multiplo de 2 
                                               // se cumple (num/2), sino se cumple (num*3)+1
        num_grande++;     //por cada ciclo num_grande se ira sumando uno, hasta encontrar la cadena mas larga
    }
    return num_grande; // retorna num_grande 
}

