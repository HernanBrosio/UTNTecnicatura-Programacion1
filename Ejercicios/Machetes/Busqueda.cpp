#include <iostream>
using namespace std;

// BUSQUEDA SECUENCIAL
// Se reduce simplemente a recorrer el vector hasta encontrar el valor buscado

int buscarSecuencial(int vec[], int, cant, int valor)
{
    for (int i = 0; i < cant; i++)
    {
        if (vec[i] == valor)
        {
            return i;
        }
    }
    // Si no salio todavia, es que no estaba en el vector
    return -1;
}

// Búsqueda por Posición Única Predecible (PUP)

int main()
{
    float ventas[31];
    for (int i = 0; i < 31; i++)
    {
        cout << “Ingrese la venta del día “ << i + 1 << “: “;
        cin >> ventas[i];
    }
}

// Búsqueda binaria
/*La búsqueda binaria es un algoritmo de búsqueda rápida con una complejidad de tiempo de
ejecución de (log n). Este algoritmo de búsqueda funciona sobre el principio de dividir y
conquistar. Para que este algoritmo funcione correctamente, el vector debe estar ordenado.*/

int busquedaBinaria(int arr[], int n, int x)
{
    // Cuando arranco evalúo todo el vector de 0 a n - 1
    int inicio = 0;
    int fin = n - 1;
    while (fin >= inicio)
    {
        int mitad = inicio + (fin - inicio) / 2;
        // Si el elemento es el del medio, devolvemos la posicion
        if (arr[mitad] == x)
            return mitad;
        // Si el elemento es menor entonces solo puede estar en la primer mitad
        if (arr[mitad] > x)
        {
            fin = mitad - 1; // Cambio el limite superior
        }
        else
        {
            inicio = mitad + 1; // Cambio el limite inferior
        }
    }
    // Si llegamos hasta aca es que el elemento no estaba
    return -1;
}
