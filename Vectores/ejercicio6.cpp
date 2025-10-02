/*6. Ingresar un valor entero N (< 40). A continuación ingresar un conjunto VALOR de N elementos.
Determinar e imprimir el valor máximo y la posición del mismo dentro del conjunto.
Si el máximo no es único, imprimir todas las posiciones en que se encuentra.*/


#include <iostream>
using namespace std;

void ingresarNumeros(int vecUno[], int n);
int buscarMaximoYPos(int vecUno[], int n);



int main(){

int n;
cout << "ingrese un numero menor a 40: ";
cin >> n;

int vecUno[n];

ingresarNumeros(vecUno, n);
buscarMaximoYPos(vecUno, n);



}


void ingresarNumeros(int vecUno[], int n){
for (int i = 0; i < n; i++){
    cout << "Ingrese los numeros del vector uno: ";
    cin >> vecUno[i];
}
}


int buscarMaximoYPos(int vecUno[], int n){
    int max = vecUno[0];
    for (int i = 0; i < n; i++){
        if (vecUno[i] > max){
            max = vecUno[i];
        }
    }
    cout << "El maximo es: " << max << endl;

    for (int i = 0; i < n; i++){
        if (vecUno[i] == max){
            cout << "La posicion es: " << i << endl;
        }
    }
}


