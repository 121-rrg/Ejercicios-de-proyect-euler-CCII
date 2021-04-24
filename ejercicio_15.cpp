#include <iostream>
using namespace std;

int main(){

	int const fila=21;  // asignamos el valor de las variales columnas y filas como constante
	int columna=fila;
	unsigned long long  matriz[fila][columna]; // creamos nuestra matriz   

	for(int i=0;i<fila;i++){    // con este for , asignamos a cada valor de la matriz a i y j
		for(int j=0;j<columna;j++){
			matriz[i][j]=1;		// le asignamos el valor de 1 para cada posicion de la matriz  ixj
		}
	}
	for(int i=1;i<fila;i++){  // recorremos todas las posiciones de la matriz para i y j
		for(int j=1;j<columna;j++){
			matriz[i][j]=matriz[i-1][j]+matriz[i][j-1];//sumamos de forma recursiva todos los elementos de i y j
		}
	}
	cout<<matriz[20][20];  // imprimimos nuestro valor en pantalla
	
	return 0;
}
