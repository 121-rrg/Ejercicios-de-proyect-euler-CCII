#include <iostream>
using namespace std;

int main(){

    for (int a=1; a<=1000;a++){                  // Hacemos un buble anidado
        for (int b=1; b<=1000;b++){              // para a b y c que iran desde 1 hasta 1000
            for (int c=1; c<=1000;c++){
                if (a*a+b*b==c*c && a+b+c==1000){  // la condicion donde la suma de los cuadrados de a y b sea c al cuadrado
                                                    // y la suma de los 3 sea 1000
                    cout<<a*b*c<<endl;              // imprime el valor en pantalla del producto de los 3 numeros 
                }
            }
        }
    }
    return 0;
