/*5. Ingresar un valor entero N (< 30).
A continuación ingresar un conjunto UNO y luego otro conjunto DOS, ambos de N componentes.
Generar e imprimir otro conjunto TRES intercalando los valores de posición impar de DOS 
y los valores de posición par de UNO.*/

#include <iostream>
using namespace std;


int main(){

    int n;
    cout << "Ingrese un numero menor a 30: ";
    cin >> n;

    int vecUno[n];
    int vecDos[n];
    int vecTres[n];

    for (int i = 0; i < n; i++){
        cout << "ingrese los numeros del vector uno: ";
        cin >> vecUno[i];
    }

    for (int i = 0; i < n; i++){
        cout << "Ingrese los numeros del vector dos: ";
        cin >> vecDos[i];
    }

    for (int i = 0; i < n; i++){
        if (i % 2 == 0){
            vecTres[i] = vecDos[i];
        }else{
            vecTres[i] = vecUno[i];
        }
    }

    for (int i = 0; i < n; i++){
        cout << vecTres[i] << endl;
    }
} j