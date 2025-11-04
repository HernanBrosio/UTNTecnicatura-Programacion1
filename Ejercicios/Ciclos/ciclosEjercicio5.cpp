/*5. Escalera. Realizar una escalera de #.
a. Ejemplo
#
##
###
####
b. Que el usuario pueda disponer la cantidad de escalones.*/

#include <iostream>
using namespace std;


int escalera (int escalones);

int main(){

    int escalones;

    cout << "ingrese la cantidad de escalones deseados o 0 para salir: " << endl;
    cin >> escalones;
    
    escalera(escalones);
}


int escalera (int escalones){
while (escalones != 0){
    
    for (int i=1; i<=escalones; i++){
        for (int j=1; j<=i; j++){
            cout << "#";
        }
        cout << endl;
    }

    cout << "ingrese la cantidad de escalones deseados o 0 para salir: " << endl;
    cin >> escalones;

}

}