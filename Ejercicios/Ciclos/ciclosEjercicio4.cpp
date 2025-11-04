/*Productoria. (pedir valores por pantalla, y que devuelva la multiplicación de todos ellos.*/

#include <iostream>
using namespace std;

int productoria (int num);


int main(){
    cout << "------- Productoria -------" << endl;
    int num, prod = 1;

    cout << "Ingrese un numero o 0 para mostrar resultado y salir: ";
    cin >> num;

    prod = productoria(num);
    cout << "El producto es: " << prod << endl;
}


int productoria (int num){
    int prod = 1;
    while (num != 0){
        prod *= num;
        cout << "Ingrese un numero o 0 para mostrar resultado y salir: ";
        cin >> num;
    }
    return prod;
}