#include <iostream>
using namespace std;

int main()
{
    int n, m, x, y;

    cout << "Ingrese la cantidad de filas de la primera matriz: ";
    cin >> n;
    cout << "Ingrese la cantidad de columnas de la primera matriz: ";
    cin >> m;
    cout << "Ingrese la cantidad de filas de la segunda matriz: ";
    cin >> x;
    cout << "Ingrese la cantidad de columnas de la segunda matriz: ";
    cin >> y;

    int matriz1[n][m];
    int matriz2[x][y];
    int matrizSuma[n][m];
    int matrizResta[n][m];
    int matrizMultiplicacion[n][y];
    char operacion;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Ingrese el elemento [" << i << "][" << j << "] de la primera matriz: ";
            cin >> matriz1[i][j];
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << "Ingrese el elemento [" << i << "][" << j << "] de la segunda matriz: ";
            cin >> matriz2[i][j];
        }
    }
    cout << "Ingrese la operacion que desea realizar (+, -, *): ";
    cin >> operacion;

    switch (operacion)
    {
    case '+':
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                matrizSuma[i][j] = matriz1[i][j] + matriz2[i][j];
            }
        }
        cout << "La suma de las matrices es: " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << matrizSuma[i][j] << " ";
            }
            cout << endl;
        }
        break;
    case '-':
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                matrizResta[i][j] = matriz1[i][j] - matriz2[i][j];
            }
        }
        cout << "La resta de las matrices es: " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << matrizResta[i][j] << " ";
            }
            cout << endl;
        }
        break;
    case '*':
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < y; j++)
            {
                matrizMultiplicacion[i][j] = 0;
                for (int k = 0; k < m; k++)
                {
                    matrizMultiplicacion[i][j] += matriz1[i][k] * matriz2[k][j];
                }
            }
        }
        cout << "La multiplicacion de las matrices es: " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cout << matrizMultiplicacion[i][j] << " ";
            }
            cout << endl;
        }
        break;
    default:
        cout << "Operacion no valida" << endl;
        break;
    }
}
