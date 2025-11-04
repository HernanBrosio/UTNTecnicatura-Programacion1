/*
Ejercicio 2
Dado tres valores determinar e imprimir una leyenda informando si
“Forman triangulo” o “No  forman triangulo”.
Tener en cuenta el teorema de desigualdad de los triángulos:
En todo triángulo la suma de las  longitudes de dos lados cualesquiera es
siempre mayor a la longitud del lado restante.
*/

#include <iostream>
using namespace std;

int main(){

    int a, b, c;

    cout << "Ingrese el valor del lado A" << endl;
    cin >> a;
    cout << "Ingrese el valor del lado B" << endl;
    cin >> b;
    cout << "Ingrese el valor del lado C" << endl;
    cin >> c;

    if ((a+b)>c && (a+c)>b && (b+c)>a)
    {
        cout << "Forma triangulo";
    }else {cout << "No forma triangulo";}
    

}