#include <iostream>
using namespace std;

void swap(int &n1, int &n2) {
    int aux = n1;
    n1 = n2;
    n2 = aux;
}

int main() {
    int a = 55, b = 45;
    swap (a, b);
    cout << a << " " << b << endl;
}
