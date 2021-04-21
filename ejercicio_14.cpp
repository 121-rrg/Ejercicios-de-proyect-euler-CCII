#include <iostream>
using namespace std;

long long collatz(long long num){
    long long num_grande=0;
    while (num != 1){
        num = (num%2==0)?(num/2):(num*3)+1; 
        ++num_grande; 
    }
    return num_grande;
}
int  main (){
    long long num_cadena_larga=0 ;
    long long cadena_larga=0 ;
    
    for (int i=1;i<1000000;++i){
        if (collatz(i)>cadena_larga){
            num_cadena_larga=i;
            cadena_larga=collatz(i);
        }
    }
    cout<<num_cadena_larga;
}

