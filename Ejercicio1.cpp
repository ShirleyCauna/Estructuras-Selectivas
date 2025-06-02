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
    
    // Validación simple para evitar números negativos
    if (nota1 < 0 || nota2 < 0 || nota3 < 0) {
        cout << "No se permiten notas negativas." << endl;
        return 0; // Sale del programa sin continuar
    }

    // Calcular promedio
    promedio = (nota1 + nota2 + nota3) / 3;
 
    // Mostrar resultado
    if (promedio >= 70)
        cout << "Aprueba" << endl;
    else
        cout << "Reprueba" << endl;

    return 0;
}