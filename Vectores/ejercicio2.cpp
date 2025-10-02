/*Ingresar un valor entero N (< 30) y a continuación un conjunto de N elementos. Si el último
elemento del conjunto tiene un valor menor que 10 imprimir los negativos y en caso contrario los
demás.*/
#include <iostream>
using namespace std;


void listaNumeros(int numeros[], int n);
int imprimeNumeros(int numeros[], int n);

int main(){

    int n;
    cout << "Ingrese un numero menor a 30: ";
    cin >> n;

    int numeros[n];
    
    listaNumeros(numeros, n);
    imprimeNumeros(numeros, n);
}


void listaNumeros(int numeros[], int n){
    for (int i = 0; i < n; i++){
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
    }
}



int imprimeNumeros(int numeros[], int n){
    if (numeros[n-1] < 10){
        for (int i = 0; i < n; i++){
            if (numeros[i] < 0){
                cout << numeros[i] << endl;
            }
        }
    } else {
        for (int i = 0; i < n; i++){
            cout << numeros[i] << endl;
        }
    }
}