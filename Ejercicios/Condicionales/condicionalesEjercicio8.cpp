/*Ejercicio 8
Según la edad de un socio ingresada, mostrar por pantalla alguna de las siguientes leyendas:
∙ ‘menor’ si la edad es menor o igual a 12
∙ ‘cadete’ si la edad está comprendida entre 13 y 18
∙ ‘juvenil’ si la edad es mayor que 18 y no supera los 26
∙ ‘mayor’ en el caso que no cumpla ninguna de las condiciones anteriores
*/
#include <iostream>
using namespace std;

int main(){
//defino variables y pido informaicon por consola

    int edad;

    cout << "Ingrese la edad del socio:"<< endl;
    cin >> edad;

//se procesa la informacion recibida para devolver lo solicitado
    if (edad <= 12)
    {
        cout << "Socio Menor";
    } else {
        if (edad > 12 && edad <=18)
        {
            cout << "Socio Cadete";
        } else {
            if (edad > 18 && edad <= 26)
            {
                cout << "Socio Juvenil";
            }else {
                cout << "Socio Mayor";
            }
            
        }
        
    }
    


}