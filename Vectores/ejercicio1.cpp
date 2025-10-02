/*1. Ingresar un valor N (< 25). Generar un arreglo de N componentes en el cual
las mismas contengan los primeros números naturales pares e imprimirlo.*/

#include <iostream>
using namespace std;


int numerosNaturalesPares(int numeros[], int n);


/*
 * Funcion principal que solicita un numero menor a 25 y utiliza
 * la funcion numerosNaturalesPares para generar un arreglo de N componentes
 * en el cual las mismas contengan los primeros numeros naturales pares e
 * imprimirlo.
 */
int main(){

    int n;
    cout << "Ingrese un numero menor a 25: ";
    cin >> n;

    int numeros[n];

    numerosNaturalesPares(numeros, n);

}


/*
 * Funcion que llena un arreglo con los primeros numeros naturales pares y los
 * imprime. La funcion se repite hasta que el usuario ingrese un numero igual a
 * 0 o mayor a 25.
 * @param numeros Un arreglo que se llena con los primeros numeros naturales pares.
 * @param n La cantidad de elementos en el arreglo.
 */
int numerosNaturalesPares(int numeros[], int n){

    while (n < 25 && n > 0){

    for (int i = 0; i < n; i++){
        numeros[i] = 2 * (i+1);
        cout << numeros[i] << endl;
        
    }
    
    return 0;

        cout << "Ingrese 0 para salir o un numero: ";
        cin >> n;
    
    }

}