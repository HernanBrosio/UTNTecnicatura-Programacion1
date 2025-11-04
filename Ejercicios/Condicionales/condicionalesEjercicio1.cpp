/*Solicitar al usuario que ingrese 3 notas y calcular el promedio e informarlo 
por pantalla de la  siguiente forma:
∙ Si es menor a 4, mostrar Insuficiente
∙ Si está entre 4 y 6 mostrar Regular
∙ Si está entre 6 y 8 mostrar Bien
∙ Si está entre 8 y 9 mostrar Muy Bien
∙ Si está entre 9 y 10 mostrar Sobresaliente
*/

#include <iostream>
using namespace std;

int main(){

    float nota1, nota2, nota3, promedio;
    string opcion;
do
{
    cout << "Ingrese nota 1: " << endl;
    cin >> nota1;
    cout << "Ingrese nota 2: " << endl;
    cin >> nota2;
    cout << "Ingrese nota 3: " << endl;
    cin >> nota3;

    promedio = (nota1+nota2+nota3)/3;

    if (promedio<4)
    {
        cout << "Promedio "<< promedio << " Insuficiente" << endl;
    }else
            if (promedio >= 4 && promedio <6)
            {
            cout << "Promedio " << promedio << " Regular" << endl;
            }else
                if (promedio >= 6 && promedio <8)
                {
                cout << "Promedio " << promedio << " Bien" << endl;
                }else
                    if (promedio >=8 && promedio <9)
                    {
                    cout << "Promedio "<< promedio << " Muy Bien" << endl;
                    }else 
                        if (promedio >= 9 && promedio <= 10)
                        {
                        cout << "Promedio "<< promedio << " Sobresaliente" << endl;
                        }

                        
    cout << "Si desea volver a calcular promedio escriba Si, sino, escriba No para salir" << endl;
    cin >> opcion;

} while (opcion != "no");
}