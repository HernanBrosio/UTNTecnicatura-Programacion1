//Hacer un programa que enumere los números del 1 hasta el que el usuario desee.

#include <iostream>
using namespace std;

int main(){

    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++)
    {
        cout << i << endl;
    }
    
}