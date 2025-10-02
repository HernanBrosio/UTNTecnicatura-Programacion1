#include <iostream>
using namespace std;


void crearVector(int N, int VEC[]);
int Acumulador(int N, int VEC[], int acumulador);
int resultado(int N, int VEC[], int acumulador);


/**
 * @brief Programa principal que solicita un numero menor a 25 y
 * llama a las funcionesones crearVector, Acumulador y resultado para
 * generar un vector con los primeros numeros naturales pares e
 * imprimirlo.
 */
int main(){


int N;
int acumulador = 0;


cout << "Ingrese un numero menor a 25; " << endl;
cin >> N;


int VEC[N];

crearVector(N, VEC);
acumulador = Acumulador(N, VEC, acumulador);
resultado(N, VEC, acumulador);

}


/**
 * @brief Pide al usuario que ingrese N numeros y los almacena en el
 * arreglo VEC.
 * @param N La cantidad de numeros a ingresar.
 * @param VEC El arreglo donde se almacenaran los numeros.
 */
/*******  fd829a21-3e9d-4600-920e-f5b0c654a0d2  *******/
void crearVector(int N, int VEC[]){
for(int i = 0; i < N; i++){
    cout << "Ingrese un numero: ";
    cin >> VEC[i];
}
}


/**
 * @brief Calcula la suma de los elementos del arreglo VEC.
 * @param N La cantidad de elementos en el arreglo VEC.
 * @param VEC El arreglo de enteros cuyos elementos se van a sumar.
 * @return La suma de todos los elementos del arreglo VEC.
 */
int Acumulador(int N, int VEC[],int acumulador){
for (int i = 0; i < N; i++){
    acumulador += VEC[i];
}
return acumulador;
}


/**
 * @brief Imprime los numeros impares o pares de un arreglo VEC,
 * dependiendo de si la suma de todos los elementos es mayor o menor a 0.
 * @param N La cantidad de elementos en el arreglo VEC.
 * @param VEC El arreglo de enteros cuyos elementos se van a imprimir.
 */
int resultado(int N, int VEC[], int acumulador){
if (acumulador > 0){
    for (int i = 1; i < N; i++){
    cout << "Los numeros de los indices impares son; " << VEC[i] << endl;
    i++;
    }
}else{
    for (int i = 0; i < N; i++){
    cout << "Los numeros de los indices pares son; " << VEC[i] << endl;
    i++;
    }
}
}