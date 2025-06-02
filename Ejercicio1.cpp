// 1. Determinar si un alumno aprueba o reprueba un curso,
// sabiendo que aprueba si su promedio de tres calificaciones es mayor o igual a 70;
// reprueba en caso contrario.

#include <iostream>
using namespace std;

int main() {
    int nota1, nota2, nota3, promedio;

    // Solicitar notas al usuario
    cout << "Ingrese tres notas: ";
    cin >> nota1 >> nota2 >> nota3;
    
    // Calcular promedio
    promedio = (nota1 + nota2 + nota3) / 3;
 
    // Mostrar resultado
    if (promedio >= 70)
        cout << "Aprueba" << endl;
    else
        cout << "Reprueba" << endl;

    return 0;
}