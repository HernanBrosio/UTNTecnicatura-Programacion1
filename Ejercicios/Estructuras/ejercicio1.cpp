/*Ej. 1: Dado el siguiente dibujo de un registro,
especifique la nomenclatura para acceder al registro y cada uno de sus campos,
y las operaciones que se pueden realizar a nivel registro y a nivel campos.
Defina otro registro del mismo tipo de datos.

Legajo 8 dígitos
ApellidoNombre 25 caracteres
Nota 0 a 10*/


#include <iostream>
using namespace std;

struct alumno{
    char legajo[8];
    char apellidoYNombre[25];
    float nota;
};

int main(){

    int cantAlumnos;
    cout << "Ingrese la cantidad de alumnos que desea cargar: ";
    alumno vectorAlumnos[cantAlumnos];

    for (int i = 0; i < cantAlumnos; i++){
    cout << "Ingrese el legajo: ";
    cin.getline(vectorAlumnos[i].legajo, 8);
    cout << "Ingrese el apellido y nombre: ";
    cin.getline(vectorAlumnos[i].apellidoYNombre, 25);
    cout << "Ingrese la nota: ";
    cin >> vectorAlumnos[i].nota;

}

}