//1. Que un programa te salude mientras le digas hola. Cuando le digas chau termine.

#include <iostream>
using namespace std;

int main(){

    string saludo;

    cout << "Dime hola para saludarte, o chau para terminar: ";
    cin >> saludo;

    while (saludo != "chau")
    {
        cout << "Hola" << endl;
        cout << "Dime hola para saludarte, o chau para terminar: ";
        cin >> saludo;
    }
    
}