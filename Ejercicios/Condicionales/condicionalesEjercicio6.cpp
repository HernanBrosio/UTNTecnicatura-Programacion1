/*Dado un año informar si es bisiesto o no.
Tener en cuenta que un año es bisiesto si cumple los  siguientes criterios:
∙ Es divisible entre 4.
∙ Si termina en 00, es divisible entre 400
(2000 y 2400 sí son bisiestos. 2100, 2200 y 2300 no  lo son).*/

#include <iostream>
using namespace std;


int main(){
    cout <<"------ El año es bisiesto? ------"<< endl;

    //se definen variables y se piden datos por consola

    int año, añoDosDogitos;

    cout <<"ingrese el año que desa averiguar: "<< endl;
    cin >> año;

    añoDosDogitos = año % 100;

    if ((añoDosDogitos == 00) && (año % 400 != 0))
    {
        cout << "El año no es bisiesto";
    } else {
        if (año % 4 == 0)
        {
            cout << "El año es bisiesto";
        }else {
            cout << "El año no es bisiesto";
        }
        
    }
}