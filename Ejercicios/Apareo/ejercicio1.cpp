
#include <iostream>
using namespace std;

struct Alumno
{
    int numeroLegajo;
    int codigoMateria;
    string apllidoNombre;
};

void apareo(Alumno maestroFinales[], int m, Alumno diaFinales[], int n, Alumno finalesAct[], int &cantidad);

int main()
{
    int n = 5, m = 5;
    int cantidad = n + m;

    Alumno maestroFinales[n] = {
        {20123456, 100100, "Maestri, Juan"},
        {20123458, 100100, "Gomez, Luis"},
        {20123457, 100200, "Perez, Ana"},
        {20123460, 100200, "Rodriguez, Carlos"},
        {20123459, 100300, "Lopez, Maria"},
    };
    Alumno diaFinales[m] = {
        {20123461, 100100, "Fernandez, Sofia"},
        {20123464, 100100, "Diaz, Javier"},
        {20123463, 100200, "Sanchez, Lucia"},
        {20123462, 100300, "Martinez, Diego"},
        {20123465, 100300, "Alvarez, Elena"}};

    Alumno finalesAct[cantidad];
    apareo(maestroFinales, n, diaFinales, m, finalesAct, cantidad);

    cout << "Finales actualizados:" << endl;
    for (int i = 0; i < cantidad; i++)
    {
        cout << finalesAct[i].numeroLegajo << " - " << finalesAct[i].codigoMateria << " - " << finalesAct[i].apllidoNombre << endl;
    }
}

void apareo(Alumno maestroFinales[], int n, Alumno diaFinales[], int m, Alumno finalesAct[], int &cantidad)
{
    int i = 0, j = 0;
    int k = 0;

    while (i < n && j < m)
    {
        if (maestroFinales[i].codigoMateria < diaFinales[j].codigoMateria)
        {
            finalesAct[k] = maestroFinales[i];
            i++;
        }
        else
        {
            finalesAct[k] = diaFinales[j];
            j++;
        }
        k++;
    }
    while (i < n)
    {
        finalesAct[k] = maestroFinales[i];
        i++;
        k++;
    }
    while (j < m)
    {
        finalesAct[k] = diaFinales[j];
        j++;
        k++;
    }
    cantidad = k;
}