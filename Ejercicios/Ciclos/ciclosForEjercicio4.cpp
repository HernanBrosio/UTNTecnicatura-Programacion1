/*Hacer un programa que me pregunte cuántas veces quiero saludarlo,
y que repita “hola” la cantidad de veces que lo solicitó el usuario.*/

#include <iostream>
using namespace std;

int main(){

    int veces;

    cout << "Ingrese cuantas veces quiere que lo salude: ";
    cin >> veces;

    for (int i = 1; i <= veces; i++)
    {
        cout << "Hola" << endl;
    }
    
}