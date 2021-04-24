#include <iostream>
using namespace std;

int diferencia_suma_cuadrado_y_cuadrado_suma(int a); //prototipo de funcion

int main(){
    cout<<diferencia_suma_cuadrado_y_cuadrado_suma(100); //imprimimos en pantalla el llamado de mi funcion
    return 0;
}

int diferencia_suma_cuadrado_y_cuadrado_suma(int a){ // implementacion de la funcion
    int suma_cuadrado=0,cuadrado_suma=0,diferencia=0; //declaramos nuestras variables

    for(int i=1;i<=a;i++){  //hacemos el recorrido de los elementos hasta a
        suma_cuadrado+=i*i; // sumamos todos los cuadrados de los numeros de 1 hasta a
        cuadrado_suma+=i;   //sumamos los numeros de 1 hasta a
    }

    diferencia=cuadrado_suma*cuadrado_suma - suma_cuadrado; //la diferencia de la suma de los cuadrados y la suma de los elemetos al cuadrado 

    return diferencia; // retorna la diferencia
}
