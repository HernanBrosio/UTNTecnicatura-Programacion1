/*Se dispone de un conjunto de boletas de inscripción de alumnos (100 como máximo)
a examen en el mes de mayo. Cada boleta tiene los siguientes datos: apellido,
número de legajo, código de materia, día, mes y año del
examen. Los datos finalizan con un legajo igual a 0.
Desarrollar un programa que, a partir del ingreso de las boletas mencionadas,
por teclado genere un vector de inscripción de alumnos a exámenes finales según el siguiente diseño:
a.1 Nro. de legajo (8 dígitos) a.2 Código de materia (6 dígitos)
a.3 Día del examen (1..31) a.4 Mes del examen (1..12)
a.5 Año del examen (4 dígitos) a.6 Apellido (25 caract)*/

#include <iostream>
using namespace std;

struct boletasInscripcion
{
    string apellido;
    string numeroLegajo;
    string codigoMateria;
    int diaExamen;
    int mesExamen;
    int yearExamen;
};

void incripcionAlumnosExamenesFinales(boletasInscripcion cantidadBoletas[]);
void mostrarInscripcionAlumnos(boletasInscripcion cantidadBoletas[]);
void materia(boletasInscripcion cantidadBoletas[], int i);
void mostrarInscripcionAlumnosPorMateria(boletasInscripcion cantidadBoletas[]);

int main()
{
    boletasInscripcion cantidadBoletas[100];
    incripcionAlumnosExamenesFinales(cantidadBoletas);
    mostrarInscripcionAlumnosPorMateria(cantidadBoletas);
}


void incripcionAlumnosExamenesFinales(boletasInscripcion cantidadBoletas[])
{
    for (int i = 0; i < 100; i++)
    {
        int boletascargadas = i;
        cout << "ingrese numero de legajo (8 digitos) o 0 para salir: " << endl;
        cin >> cantidadBoletas[i].numeroLegajo;
        if (cantidadBoletas[i].numeroLegajo == "0")
        {
            cout << "Carga finalizada por legajo 0." << endl;
            cout << "Se han cargado " << boletascargadas << " boletas de inscripcion." << endl;
            break;
        }
        while (cantidadBoletas[i].numeroLegajo.length() != 8)
        {
            cout << "Error: El numero de legajo debe tener 8 digitos. Ingrese nuevamente o 0 para salir: " << endl;
            cin >> cantidadBoletas[i].numeroLegajo;
            if (cantidadBoletas[i].numeroLegajo == "0")
            {
                cout << "Carga finalizada por legajo 0." << endl;
                cout << "Se han cargado " << boletascargadas << " boletas de inscripcion." << endl;
                return;
            }
        }

        materia(cantidadBoletas, i);

        cout << "ingrese dia de examen: " << endl;
        cin >> cantidadBoletas[i].diaExamen;
        while (cantidadBoletas[i].diaExamen < 1 || cantidadBoletas[i].diaExamen > 31)
        {
            cout << "Error: El dia de examen debe estar entre 1 y 31. Ingrese nuevamente: " << endl;
            cin >> cantidadBoletas[i].diaExamen;
        }
        cout << "ingrese mes de examen: " << endl;
        cin >> cantidadBoletas[i].mesExamen;
        while (cantidadBoletas[i].mesExamen < 1 || cantidadBoletas[i].mesExamen > 12)
        {
            cout << "Error: El mes de examen debe estar entre 1 y 12. Ingrese nuevamente: " << endl;
            cin >> cantidadBoletas[i].mesExamen;
        }
        cout << "ingrese anio de examen: " << endl;
        cin >> cantidadBoletas[i].yearExamen;
        while (cantidadBoletas[i].yearExamen < 1000 || cantidadBoletas[i].yearExamen > 9999)
        {
            cout << "Error: El año de examen debe tener 4 digitos. Ingrese nuevamente: " << endl;
            cin >> cantidadBoletas[i].yearExamen;
        }
        cout << "ingrese apellido: " << endl;
        cin >> cantidadBoletas[i].apellido;
        while (cantidadBoletas[i].apellido.length() > 25)
        {
            cout << "Error: El apellido no debe superar los 25 caracteres. Ingrese nuevamente: " << endl;
            cin >> cantidadBoletas[i].apellido;
        }

        cout << "Boleta " << boletascargadas + 1 << " de inscripcion cargada correctamente." << endl;
        if (boletascargadas == 100)
        {
            cout << "Se ha alcanzado la cantidad maxima de boletas (100)." << endl;
            break;
        }
    }
}


void mostrarInscripcionAlumnos(boletasInscripcion cantidadBoletas[])
{
    for (int i = 0; i < 100; i++)
    {
        if (cantidadBoletas[i].numeroLegajo == "0")
        {
            break; // Salir del bucle si se encuentra un legajo igual a 0
        }
        cout << "boleta numero " << i + 1 << " :" << endl;
        cout << "El numero de legajo es: " << cantidadBoletas[i].numeroLegajo << endl;
        cout << "El codigo de materia es: " << cantidadBoletas[i].codigoMateria << endl;
        cout << "El dia de examen es: " << cantidadBoletas[i].diaExamen << endl;
        cout << "El mes de examen es: " << cantidadBoletas[i].mesExamen << endl;
        cout << "El year de examen es: " << cantidadBoletas[i].yearExamen << endl;
        cout << "El apellido es: " << cantidadBoletas[i].apellido << endl;
        cout << "------------------------------" << endl;
    }
}

void materia(boletasInscripcion cantidadBoletas[], int i)
{
    int opcion;

    cout << "Seleccione la materia que desea cargar:\n";
    cout << "1. Programacion 1\n";
    cout << "2. Arquitectura de Sistemas Operativos\n";
    cout << "3. Organizacion Empresarial\n";
    cout << "4. Matematica\n";

    cin >> opcion;
    while (opcion < 1 || opcion > 4)
    {
        cout << "Opcion invalida. Ingrese un numero entre 1 y 4: ";
        cin >> opcion;
    }

    switch (opcion)
    {
    case 1:
        cantidadBoletas[i].codigoMateria = "990001";
        break;
    case 2:
        cantidadBoletas[i].codigoMateria = "990002";
        break;
    case 3:
        cantidadBoletas[i].codigoMateria = "990003";
        break;
    case 4:
        cantidadBoletas[i].codigoMateria = "990004";
        break;
    }
}


void mostrarInscripcionAlumnosPorMateria(boletasInscripcion cantidadBoletas[])
{
    int opcion;
    cout << "Seleccione la materia que desea Imprimir:" << endl;
    cout << "1. Programacion 1" << endl;
    cout << "2. Arquitectura de Sistemas Operativos" << endl;
    cout << "3. Organizacion Empresarial" << endl;
    cout << "4. Matematica" << endl;
    cin >> opcion;
    while (opcion < 1 || opcion > 4)
    {
        cout << "Opcion invalida. Ingrese un numero entre 1 y 4: ";
        cin >> opcion;
    }
    for (int i = 0; i < 100; i++)
    {
        if (cantidadBoletas[i].numeroLegajo == "0")
        {
            break; // Salir del bucle si se encuentra un legajo igual a 0
        }
        switch (opcion)
        {
        case 1:
            if (cantidadBoletas[i].codigoMateria == "990001")
            {
                cout << "boleta numero " << i + 1 << " :" << endl;
                cout << "Legajo------Apellido------Fecha de examen------Codigo de materia" << endl;
                cout << cantidadBoletas[i].numeroLegajo << "      " << cantidadBoletas[i].apellido << "      " << cantidadBoletas[i].diaExamen << "/" << cantidadBoletas[i].mesExamen << "/" << cantidadBoletas[i].yearExamen << "          " << cantidadBoletas[i].codigoMateria << endl;
                cout << "------------------------------" << endl;
            }
            break;
        case 2:
            if (cantidadBoletas[i].codigoMateria == "990002")
            {
                cout << "boleta numero " << i + 1 << " :" << endl;
                cout << "El numero de legajo es: " << cantidadBoletas[i].numeroLegajo << endl;
                cout << "El codigo de materia es: " << cantidadBoletas[i].codigoMateria << endl;
                cout << "El dia de examen es: " << cantidadBoletas[i].diaExamen << endl;
                cout << "El mes de examen es: " << cantidadBoletas[i].mesExamen << endl;
                cout << "El year de examen es: " << cantidadBoletas[i].yearExamen << endl;
                cout << "El apellido es: " << cantidadBoletas[i].apellido << endl;
                cout << "------------------------------" << endl;
            }
            break;
        case 3:
            if (cantidadBoletas[i].codigoMateria == "990003")
            {
                cout << "boleta numero " << i + 1 << " :" << endl;
                cout << "El numero de legajo es: " << cantidadBoletas[i].numeroLegajo << endl;
                cout << "El codigo de materia es: " << cantidadBoletas[i].codigoMateria << endl;
                cout << "El dia de examen es: " << cantidadBoletas[i].diaExamen << endl;
                cout << "El mes de examen es: " << cantidadBoletas[i].mesExamen << endl;
                cout << "El year de examen es: " << cantidadBoletas[i].yearExamen << endl;
                cout << "El apellido es: " << cantidadBoletas[i].apellido << endl;
                cout << "------------------------------" << endl;
            }
            break;
        case 4:
            if (cantidadBoletas[i].codigoMateria == "990004")
            {
                cout << "boleta numero " << i + 1 << " :" << endl;
                cout << "El numero de legajo es: " << cantidadBoletas[i].numeroLegajo << endl;
                cout << "El codigo de materia es: " << cantidadBoletas[i].codigoMateria << endl;
                cout << "El dia de examen es: " << cantidadBoletas[i].diaExamen << endl;
                cout << "El mes de examen es: " << cantidadBoletas[i].mesExamen << endl;
                cout << "El year de examen es: " << cantidadBoletas[i].yearExamen << endl;
                cout << "El apellido es: " << cantidadBoletas[i].apellido << endl;
                cout << "------------------------------" << endl;
            }
            break;
        }
    }
}