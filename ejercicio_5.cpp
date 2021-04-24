#include <iostream>
using namespace std;

long long MCM(long long, long long); // Prototipos de funcion
long long num_divisible(int, int);

int arr[20]; // declaramos nuestro arreglo globalmente 
int main(){

	for (int n=0; n<20; n++)   // recorremos el for
		arr[n]=n+1;            // le asignamos los valores del 1 al 20, empezando desde la posicion 0
	cout<<num_divisible(0,19); // imprimimos el resultado de la llamada a nuestra funcion num_divisible
    return 0;
}

long long MCM(long long a, long long b){ // implementacion de la funcion

	int mayor=0;      // declaramos nuestra variable mayor
    if(a>b)          // si a es mayor que b
        mayor=a;     // mayor almacenara el valor de a 
    else
        mayor=b;    // si no es el caso, mayor almacena el valor de b
  
    while((mayor%a !=0) || (mayor%b !=0)){ //mientras el mayor de sea multiplo tanto de a y b el loop seguira
        mayor++;                            //se contara las veces que se hizo el loop 
    }
    return mayor;       //retorna el valor mayor, osea el mcm de a y b
}

long long num_divisible(int izq, int der){   // implementacion de la funcion
    int mid = (izq+der)/2;                   // declaramos nuestra variable media, con la suma del ultimo y primer nuermo entre 2
	if (der-izq<=1)                          // nuestro caso base sera cuando la resta de los numeros sea menor igual a 1 
		return MCM(arr[izq], arr[der]);      // si fuera el caso, solo se haria el mcm de esos numeros
	return MCM(num_divisible(izq, mid), num_divisible(mid+1, der)); //si no es el caso, llamaremos recursivamente a nuesta funcion num_divisible
}
