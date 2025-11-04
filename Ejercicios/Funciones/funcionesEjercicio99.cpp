/*Ejercicio 7
Dados un mes y año correspondiente informar cuantos días tiene el mes.*/

#include <iostream>
using namespace std;

bool añoBisiesto(int año);
int diasDelMes(int mes, int anio);
int main(){
//se declaran variables y se piden datos por consola
    int mes, año;
    string eleccion;
do
{
    cout <<"Ingrese el mes:"<< endl;
    cin >> mes;
    cout <<"Ingrese el año"<< endl;
    cin >> año;

    mes = diasDelMes(mes, año);

    cout << "El mes tiene " << mes << " dias" << endl;
    
    cout << "Si desea volver a ejecutar escriba Si, si desea salir escriba No"<< endl;
    cin >> eleccion;

} while (eleccion == "si");
    
}

bool añoBisiesto(int año){
    if (año % 400 == 0) return true;
    if (año % 100 == 0) return false;
    return (año % 4 == 0);
}

int diasDelMes(int mes, int año) {
    bool esBisiesto = añoBisiesto(año);
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        return 31;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    } else if (mes == 2) {
        return esBisiesto ? 29 : 28;
    } else {
        return -1; // Mes inválido
    }
}