#include <iostream>
using namespace std;

/*struct boletasInscripcion
{
    string apellido;
    int numeroLegajo;
    string codigoMateria;
    int diaExamen;
    int mesExamen = 5;
    int yearExamen;
};*/

struct fecha{
    int dia;
    int mes;
    int anio;
};

struct boleta {
    char apellido[25];
    int numeroLegajo;
    int codigoMateria;
    fecha examen;
};

struct legajosOrdenados {
    char apellido[25];
};


int main(){

    boleta boletas[100];
    legajosOrdenados vectorOrdenado[100];
    int i= 0;

    cout << "Ingrese el numero de legajo (8 digitos) o 0 para salir: " << endl;
    cin >> boletas[i].numeroLegajo;

    while (boletas[i].numeroLegajo != 0 && i < 100){
        cout << "Ingrese el apellido: " << endl;
        cin >> boletas[i].apellido;
        cout << "Ingrese el codigo de materia: " << endl;
        cin >> boletas[i].codigoMateria;
        cout << "ingrese el dia de examen: " << endl;
        cin >> boletas[i].examen.dia;
        cout << "ingrese el mes de examen: " << endl;
        cin >> boletas[i].examen.mes;
        cout << "ingrese anio de examen: " << endl;
        cin >> boletas[i].examen.anio;
        
        i++;

        cout << "Ingrese el numero de legajo (8 digitos) o 0 para salir: " << endl;
        cin >> boletas[i].numeroLegajo;

        
    }
    
    int legajoAInsertar;

    for (int i = 0; i < 100; i++)
    {
        legajoAInsertar= boletas[i].numeroLegajo;
        vectorOrdenado[legajoAInsertar - 80001].apellido = boletas[i].apellido;
    }

}