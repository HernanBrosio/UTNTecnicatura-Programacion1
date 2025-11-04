/*verificar que el ultimo numero del vector sea menor a 10 y si es menor a 10 imprimir los numeros negativos, caso contrario imprimir los demas
imprimir los numeros separandolos por un espacio*/

#include <iostream>
using namespace std;

void imprimirValores(int vec[])
{
    if (vec[9] < 10)
    {
        for (int i = 0; i < 10; i++)
        {
            if (vec[i] < 0)
            {
                cout << vec[i] << " ";
            }
        }
    }
    else
    {
        for (int i = 0; i < 10; i++)
        {
            if (vec[i] >= 0)
            {
                cout << vec[i] << " ";
            }
        }
    }
}

int main()
{

    int vec[10]{1, 2, 3, 4, -5, 6, 7, 8, 9, -11};
    imprimirValores(vec);

}