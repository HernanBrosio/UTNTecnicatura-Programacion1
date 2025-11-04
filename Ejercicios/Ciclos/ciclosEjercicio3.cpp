/*Pedir valores por pantalla y informar: Cuantos pares se ingresaron, y cuanto impares.
Con cero se sale del programa. También informar cuanto suman los pares y los impares por separado.*/

#include <iostream>
using namespace std;

int main(){
int num, pares = 0, impares = 0, par = 0, impar = 0;

cout << "Ingrese un numero, o 0 para mostrar resultados y salir: ";
cin >> num;
while (num != 0){
    if (num % 2 == 0){
        pares++;
        par += num;
    } else {
        impares++;
        impar += num;
    }
    cout << "Ingrese un numero, o 0 para mostrar resultados y salir: ";
    cin >> num;
}
cout << "Cantidad de pares: " << pares << endl;
cout << "Cantidad de impares: " << impares << endl;
cout << "Suma de los pares: " << par << endl;
cout << "Suma de los impares: " << impar << endl;

}