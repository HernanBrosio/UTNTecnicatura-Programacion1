/*//Dado un número entero de 5 dígitos informar por pantalla si es capicúa.
Un número es capicúa si  se puede leer en ambos sentidos el mismo valor,
por ejemplo el número 1441 es capicúa pero  1414 no lo es.
*/

#include <iostream>
using namespace std;

int main(){

    int numero, n1, n2, n4, n5;
    
    cout << "Ingrese un numero de 5 digitos o 0 para salir: "<< endl;
    cin >> numero;

while (numero != 0){

    if (numero < 1 || numero > 99999){
        cout << "El numero ingresado no es valido, vuelva a ingresarlo " << endl;
        cin >> numero;
    }

    n1 = numero / 10000;
    n2 = (numero / 1000) % 10;
    n4 = (numero / 10) %10;
    n5 = numero % 10;
    
    if ((n1 == n5) && (n2 == n4)){
        cout << "El numero es capicua" << endl;
    }else {
        cout << "El numero no es capicua" << endl;
    }

    cout << "Ingrese un numero de 5 digitos o 0 para salir: "<< endl;
    cin >> numero;

}
}