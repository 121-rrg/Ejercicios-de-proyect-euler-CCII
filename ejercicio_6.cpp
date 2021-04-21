#include <iostream>
using namespace std;

int diferencia_suma_cuadrado_y_cuadrado_suma(int a);

int main(){

    cout<<diferencia_suma_cuadrado_y_cuadrado_suma(100);
    return 0;
}
int diferencia_suma_cuadrado_y_cuadrado_suma(int a){
    int suma_cuadrado=0,cuadrado_suma=0,diferencia=0;
    for(int i=1;i<=a;i++){
        suma_cuadrado+=i*i;
        cuadrado_suma+=i;
    }
    diferencia=cuadrado_suma*cuadrado_suma - suma_cuadrado;
    return diferencia;
}
