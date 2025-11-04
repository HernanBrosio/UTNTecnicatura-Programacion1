/*
Ejercicio 3
Dado un número entero que representa una hora con formato de 24 horas,
pasarla al formato de  AM-PM e imprimirla por pantalla.
Ejemplo 1327 resulta 1:27 PM
*/

#include <iostream>
using namespace std;

int main(){

    int hora24, hh, mm;
    string amPm;

    cout << "Ingrese la hora en formato 24hs: " << endl;
    cin >> hora24;

    hh = hora24/100;
    mm = hora24-hh*100;

    if (hh >= 12 && hh < 24)
    {
        amPm="PM";
    }else { amPm= "AM";}

    if (hh >= 12 && hh < 24)
    {
        hh= hh-12;
    }else {hh=hh;}
    
    cout << "La hora es " << amPm << " " << hh << ":" << mm;
    
}