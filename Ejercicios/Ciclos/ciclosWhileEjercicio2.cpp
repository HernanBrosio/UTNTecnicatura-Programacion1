#include <iostream>
using namespace std;

int main(){

    int numero;

    cout << "Ingrese un numero para saber si es par o impar, o presione 0 para salir: ";
    cin >> numero;

    while (numero != 0){
        if (numero % 2 == 0){
            cout << "El numero es par" << endl;
        } else {
            cout << "El numero es impar" << endl;
        }

    cout << "Ingrese un numero para saber si es par o impar, o presione 0 para salir: ";
    cin >> numero;
    }
}