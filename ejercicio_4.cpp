#include <iostream>
using namespace std;

bool palindromo(int numero); //prototipos de funcion
void palindromo_max();

int main(){
    palindromo_max(); // llamamos a nuestra funcion palindromo_max
    return 0;
}

bool palindromo(int numero){ // implementacion de la funcion

    int valorAux=numero,palindromo=0;   //declaramos nuestras variables
    while (valorAux>0){         // mientras mi valor aux sea mayor que cero 
        palindromo=palindromo+valorAux%10;  //sumaremos el resto de nuestro numero
        palindromo=palindromo*10;       // y lo multiplicaremos por 10
        valorAux=valorAux/10;           // al final se le divide entre 10
    }
    palindromo=palindromo/10; // como nos quedara un cero al final, lo dividimos entre 10
    if (palindromo==numero){ // condicion si nuestro numero es identicamente igual a nuestro palindromo
        return true;            // diremos que es un palindromo
    }    
    else{
        return false;           // en todo caso, si no cumple, no es palindromo
    }
}

void palindromo_max(){ // implementacion de la funcion
    long int aux=0;     // declaramos nuestras variables
    for(int i=999;i>=100;i--){      //hacemos un bucle anidado donde recorremos descendentemente
        for(int j=999;j>=100;j--){      
            if(palindromo(i*j) == true && i*j>aux){ // si el  producto entre los numeros del 100 al 999 (que son de 3 digitos)
                                                    // es un palindromo y siempre y este sea mayor que mi aux, para actualizar el mayor
                aux=i*j;                            // asignamos el valor del producto de los numero i y j a nuestra variable auxiliar            
            }
        }
    }
    cout<<aux; // imprime el valor en pantalla del producto de los dos numeros
}
