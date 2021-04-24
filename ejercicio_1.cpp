
#include <iostream>
using namespace std;

int main(){
    int suma=0;  // declaramos nuestra variable suma con un valor de 0
	for(int i=1; i<1000; i++){ // hacemos un for de 0 hasta el numero 999
		if(i%3==0 || i%5== 0) // condicion si es multiplo de 3 o 5
        	suma += i;          // si cumple la condicion se suma el numero que fue divisible
    }
    cout<<"La suma total es: "<<suma;  // imprimimos el resultado
    return 0;
}

