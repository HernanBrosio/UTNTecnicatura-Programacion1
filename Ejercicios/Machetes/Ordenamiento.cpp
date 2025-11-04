#include <iostream>
using namespace std;

// Insertion Sort
/*lo que hace es ubicar cada elemento en donde le corresponde en el subvector a la
izquierda del elemento.*/

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        /* Movemos los elementos de arr[0..i-1], que son
        mas grandes que key, a la posicion siguiente
        a su posicion actual */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Burbujeo

/*Este método de ordenamiento consiste en comparar cada par de valores adyacentes, e
intercambiarlos en caso que no estén en el orden buscado*/

void burbujeo(int arr[], int n)
{
    int i, j, aux;
    for (i = 0; i < n - 1; i++)
    {
        // Los ultimos i elementos ya estan ordenados
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}

// burbujeo mejorado
/*mejoramos el burbujeo agregando el fl ag ordenado, al iniciar cada pasada lo
ponemos en true si en esa pasada hubo al menos un valor que no estaba en orden, se cambia a
false*/

void burbuejoMejor(int arr[], int n)
{
    int i, j, aux;
    int i = 0;
    bool ordenado = false;
    while (i < n && !ordenado)
    {
        ordenado = true; // Arranco asumiendo que si esta ordenado
        // Los ultimos i elementos ya estan ordenados
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
                ordenado = false; // Cambio el flag si hice un swap
            }
        }
        i++;
    }
}
