/*Ingresar un valor entero N (< 15). A continuación ingresar un conjunto DATO de N elementos.
Generar otro conjunto de dos componentes MEJORDATO donde el primer elemento sea el mayor valor de DATO
y el segundo el siguiente mayor (puede ser el mismo si está repetido). Imprimir el conjunto MEJORDATO con identificación*/


#include <iostream>
using namespace std;

void cargarDatos(int vecUno[], int n);
int maximo(int vecUno[], int n, int mejorDato[]);
int segundoMaximo(int vecUno[], int n, int mejorDato[]);



/**
 * @brief Programa principal que carga un arreglo de enteros, encuentra el maximo
 * y el segundo maximo de los elementos del arreglo y los imprime por pantalla.
 */
int main(){
    int n;
    cout << "Ingrese un numero menor a 15: ";
    cin >> n;


    int vecUno[n];
    int mejorDato[2];
    
    
    cargarDatos(vecUno, n);

    maximo (vecUno, n, mejorDato);
    segundoMaximo (vecUno, n, mejorDato);

    cout << "El maximo es: " << mejorDato[0] << endl;
    cout << "El segundo maximo es: " << mejorDato[1] << endl;
}


/**
 * @brief Funcion que carga un arreglo de enteros con n elementos.
 * @param vecUno[] El arreglo a cargar.
 * @param n La cantidad de elementos en el arreglo.
 */
void cargarDatos(int vecUno[], int n){
    for (int i = 0; i < n; i++){
        cout << "Ingrese un numero: ";
        cin >> vecUno[i];
    }
}




/**
 * @brief Encuentra el valor maximo de un arreglo y lo devuelve en la
 * primera posicion de mejorDato.
 * @param vecUno[] El arreglo que se va a buscar el maximo.
 * @param n La cantidad de elementos en el arreglo.
 * @param mejorDato[] El arreglo que se va a completar con el
 * valor maximo.
 * @return El valor maximo del arreglo.
 */
int maximo(int vecUno[], int n, int mejorDato[]){
    int max = vecUno[0];
    for (int i = 0; i < n; i++){
        if (vecUno[i] > max){
            max = vecUno[i];
        }
    }
    return mejorDato[0] = max;
}


/**
 * @brief Devuelve el segundo mayor valor de un arreglo.
 * @param vecUno[] El arreglo de enteros.
 * @param n La cantidad de elementos en el arreglo.
 * @return El segundo maximo valor del arreglo.
 */
int segundoMaximo(int vecUno[], int n, int mejorDato[]){
    int max = mejorDato[0];

    int rep = 0;
    for (int i = 0; i < n; ++i) {
        if (vecUno[i] == max) rep++;
    }
    if (rep >= 2) {
        mejorDato[1] = max;
        return max;
    }

    
    bool tiene = false;
    int m2 = max;
    for (int i = 0; i < n; ++i){
        if (vecUno[i] < max){
            if (!tiene) { m2 = vecUno[i]; tiene = true; }
            else if (vecUno[i] > m2){
                m2 = vecUno[i]; }
        }
    }
    return mejorDato[1] = m2;
}