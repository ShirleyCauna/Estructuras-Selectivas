#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero (1-5): ";
    cin >> numero;

    if (numero < 1 || numero > 5) {
        cout << "Número fuera de rango. Debe ser entre 1 y 5." << endl;
    }
    else if (numero == 1)
        cout << "La vocal es: A" << endl;
    else if (numero == 2)
        cout << "La vocal es: E" << endl;
    else if (numero == 3)
        cout << "La vocal es: I" << endl;
    else if (numero == 4)
        cout << "La vocal es: O" << endl;
    else if (numero == 5)
        cout << "La vocal es: U" << endl;

    return 0;
}