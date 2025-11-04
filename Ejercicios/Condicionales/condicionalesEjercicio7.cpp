/*Ejercicio 7
Dados un mes y año correspondiente informar cuantos días tiene el mes.*/

#include <iostream>
using namespace std;
bool añoBisiesto(int año){
    if (año % 400 == 0) return true;
    if (año % 100 == 0) return false;
    return (año % 4 == 0);
}
int main(){
//se declaran variables y se piden datos por consola
    int mes, año;
    bool esBisiesto;
    string eleccion;
do
{
    cout <<"Ingrese el mes:"<< endl;
    cin >> mes;
    cout <<"Ingrese el año"<< endl;
    cin >> año;

    esBisiesto = añoBisiesto(año);
    
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        cout << "El mes tiene 31 dias" << endl;
    } else {
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            cout << "El mes tiene 30 dias" << endl;
        } else {
            if (mes == 2 && esBisiesto == false)
            {
                cout << "El mes tiene 28 dias" << endl;
            } else {
                cout << "El mes tiene 29 dias" << endl;
            }
            
        }
    }
    cout << "Si desea volver a ejecutar escriba Si, si desea salir escriba No"<< endl;
    cin >> eleccion;

} while (eleccion == "si");

}