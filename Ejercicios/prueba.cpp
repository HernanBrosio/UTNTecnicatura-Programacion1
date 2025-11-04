//Consigna: Escribir una función llamada mostrarMayor que reciba tres enteros y devuelva el valor del mayor.

#include <iostream>
using namespace std;

/*int mostrarMayor(int x, int y, int z){
if (x > y && x > z){
    return x;
} else if (y > x && y > z){
    return y;
} else {
    return z;
}
}*/


int main(){
    
    int opcion1, opcion2, opcion3;
    
    cout << "Ingrese un numero: ";
    cin >> opcion1;

    switch (opcion1)
    {
    case 1:
        cout << "la opcion elegida es: 1" << endl;
        break;
    case 2:
        cout << "la opcion elegida es: 2"<< endl;
        break;
    case 3:
        cout << "la opcion elegida es: 3"<< endl;
        break;
    }
    

}