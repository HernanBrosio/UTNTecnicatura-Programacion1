#include <iostream>
using namespace std;

struct Reg
{
    string nombre;
    int fechaNacimiento;
};

void cargarRegistros(Reg misRegistros[]);
string calcularMayorEdad(Reg misRegistros[]);

int main()
{

    Reg misRegistros[100];
    string nombremayorEdad = "";
    cargarRegistros(misRegistros);
    nombremayorEdad = calcularMayorEdad(misRegistros);
    cout << "El nombre de la persona con mayor edad es: " << nombremayorEdad << endl;
}

void cargarRegistros(Reg misRegistros[])
{
    for (int i = 0; i < 100; i++)
    {
        cout << "Ingrese el nombre del registro " << i + 1 << ": " << endl;
        cin >> misRegistros[i].nombre;
        if (misRegistros[i].nombre == "fin")
        {
            cout << "Carga finalizada por nombre Fin." << endl;
            break;
        }
        cout << "Ingrese la fecha de nacimiento (AAAA/MM/DD) del registro " << i + 1 << ": " << endl;
        cin >> misRegistros[i].fechaNacimiento;
    }
}

string calcularMayorEdad(Reg misRegistros[])
{
    int mayorEdad = 0;
    string nombreMayor = "";

    for (int i = 0; i < 100; i++)
    {
        if (misRegistros[i].nombre == "fin")
        {
            break;
        }
        if (misRegistros[i].fechaNacimiento != 0 &&
            (mayorEdad == 0 || misRegistros[i].fechaNacimiento < mayorEdad))
        {
            mayorEdad = misRegistros[i].fechaNacimiento;
            nombreMayor = misRegistros[i].nombre;
        }
    }
    return nombreMayor;
}
