

#include <iostream>
#define n 2000000 // definimos n=2000000
using namespace std;

int main(){
    long long i,j,suma=0;
    static int primos[n]; // creaomos el arreglo primos como una variable static, como segmento de datos
                         //aumentando  la memoria de la pila
    for(i=0;i<=n;i++)     // Asignamos al arreglo, a cada posicion el valor de 1
        primos[i]=1;
    
    for(i=2;i<=n;i++){ // recorremos el arreglo 
        if(primos[i]==1){  //condicion si el valor de la posicion es 1
            for(j=2;i*j<=n;j++){ // multiplicamos todos los numeros, sea impar o par, menos primos
                primos[i*j]=0;  // asignamos el valor de 0 a todos esos numeros
            }
        }
    }
    for(i=2;i<=n;i++){ // recorrera cada valor del arreglo ya con 0 y 1
        if(primos[i]==1){   //condicion si es primo osea 1.
            suma+=i;        //sumara cada posicion de la lista
        }
    }
    cout<<"La suma de los primeros de "<<n<<" es igual a: "<<suma;
    return 0;
}
