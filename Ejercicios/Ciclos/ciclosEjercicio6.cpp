/*Juego: Acierta un número de 1 al 50. El programa debe informar si el número a
descubrir es mayor o menor al ingresado, y cuando el jugador lo descubre,
debe informar la cantidad de intentos y terminar.*/


#include <iostream>
#include <cstdlib>
#include <ctime>  
using namespace std;


int randomEnRango(int min, int max);
int adivinarNumero(int num);

int main(){
srand(static_cast<unsigned>(time(nullptr)));
    
    int num;
    
    cout << "Adivina un numero del 1 al 50: ";
    cin >> num;

    adivinarNumero(num);

}

int randomEnRango(int min, int max){
    return rand() % (max - min + 1) + min;
}


int adivinarNumero(int num) {
    int num2 = randomEnRango(1,50);
    int intentos = 0;
    
    while(num != num2){
        if (num > num2){
            cout << "El numero es menor" << endl;
        } else {
            cout << "El numero es mayor" << endl;
        }
        intentos++;
        cout << "Adivina un numero del 1 al 50: ";
        cin >> num;
    }
    cout << "Adivinaste en " << intentos << " intentos" << endl;
    return num;
}