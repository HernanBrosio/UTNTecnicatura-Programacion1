/*Ejercicio 5
Dado un triángulo representado por sus lados L1, L2, L3. Informar si el triángulo es rectángulo o no.
Recuerde que en todo triángulo rectángulo el cuadrado de la hipotenusa es igual 
a la suma de  los cuadrados de los catetos*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
cout<<"------Averiguar si el triangulo es rectangulo------"<< endl;
// se define variables y se piden datos por consola
    int l1, l2, l3;

    cout << "Ingrese el valor del lado 1: "<< endl;
    cin >> l1;
    cout << "Ingrese el valor del lado 2: "<< endl;
    cin >> l2;
    cout << "Ingrese el valor del lado 3: "<< endl;
    cin >> l3;

/*se evaluan los datos ingresados y se devuelve si es o no triangulo rectangulo
mediante el usu del teorema de pitagoras*/

    if (pow(l1,2) + pow(l2,2) == pow(l3,2) || pow(l1,2) + pow(l3,2) == pow(l2,2) || pow(l2,2) + pow(l3,2) == pow(l1,2)){
        cout<< "Es triangulo rectangulo";
    } else {
        cout<< "No es triangulo rectangulo";
    }

}