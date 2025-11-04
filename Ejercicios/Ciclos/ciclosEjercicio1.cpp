//Primos: Hacer un programa que informe si un número es primo.

#include <iostream>
using namespace std;

int main(){
    int numero;

    cout << "ingrese un numero para saber si es primo o 0 para salir: ";
    cin >> numero;

    while (numero != 0)
    {
        int contador = 0;
        for (int i = 1; i <= numero; i++)
        {
            if (numero % i == 0)
            {
                contador++;
            }
        }
        if (contador == 2)
        {
            cout << "El numero es primo" << endl;
        } else {
            cout << "El numero no es primo" << endl;
        }
        cout << "ingrese un numero para saber si es primo o 0 para salir: ";
        cin >> numero;
        
    }

}