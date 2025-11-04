/*Hacer un programa que retorne la sumatoria de 1 hasta el número que ingresa
el usuario. Ejemplo: Sumatoria de 5 = 1 + 2 + 3 + 4 + 5.*/

#include <iostream>
using namespace std;

int main(){
    int numero, suma = 0;

    cout << "ingrese un numero: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++)
    {
        suma += i;
    }
    cout << "La sumatoria es: " << suma << endl;
}