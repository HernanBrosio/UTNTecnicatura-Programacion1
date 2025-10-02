/*Ingresar un valor entero N (< 20). A continuación ingresar un conjunto VEC de N componentes.
A partir de este conjunto generar otro FACT en el que cada elemento sea el factorial del elemento
homólogo de VEC. Finalmente imprimir ambos vectores a razón de un valor de cada uno por renglón*/

#include <iostream>
using namespace std;


int vectorYFactorial(int N, int VEC[], int FACT[]);


/**
 * @brief Main function to test the program.
 *
 * The program prompts the user to enter a number N, which is the size of the vectors VEC and FACT.
 * Then it calls the function vectorYFactorial to generate the vector FACT with the factorials of the elements of VEC.
 */
int main(){


int N;
int VEC[20];
int FACT[20];


cout << "Ingrese un numero menor a 20: ";
cin >> N;


vectorYFactorial(N, VEC, FACT);
}


/**
 * @brief Function to generate a vector of factorials based on the input vector.
 * @param N The number of elements in the vectors.
 * @param VEC The input vector.
 * @param FACT The output vector which contains the factorial of each element in VEC.
 * @return void
 */
int vectorYFactorial(int N, int VEC[], int FACT[]){
    while (N != 0){
    for (int i = 0; i < N; i++){
    cout << "Ingrese un numero: ";
    cin >> VEC[i];
    FACT[i] = VEC[i];
    
    for (int j = 1; j < VEC[i]; j++){
        FACT[i] = FACT[i] * j;
    }
}
for (int i = 0; i < N; i++){
    cout << "El factorial de " << VEC[i] << " es: " << FACT[i] << endl;
}

cout << "Ingrese 0 para salir o un numero menor a 20: ";
cin >> N;

}
}