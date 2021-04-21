#include <iostream>
using namespace std;

bool palindromo(int numero){
    int valorAux=numero,palindromo=0;
    while (valorAux>0){
        palindromo=palindromo+valorAux%10;
        palindromo=palindromo*10;
        valorAux=valorAux/10;
    }
    palindromo=palindromo/10;
    if (palindromo==numero){
        return true;
    }    
    else{
        return false;
    }
}
void palindromo_max(){
    long int aux=0;
    for(int i=999;i>=100;i--){
        for(int j=999;j>=100;j--){
            if(palindromo(i*j) == true && i*j>aux){
                aux=i*j;
            }
        }
    }
    cout<<aux;
}
int main(){
    palindromo_max();
    return 0;
}