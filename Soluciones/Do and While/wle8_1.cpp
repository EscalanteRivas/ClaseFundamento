#include <iostream>
using namespace std;

int main() {
    int nota;
    int suma = 0;
    int cantidad = 0;
    float promedio;

    cout << "Ingrese calificaciones (número negativo para terminar): ";

    cin >> nota;

    while (nota >= 0) {
        suma += nota;
        cantidad++;
        cout << "Ingrese otra calificación (número negativo para terminar): ";
        cin >> nota;
    }

    if (cantidad > 0) {
        promedio = (float)suma / cantidad;
        cout << "El promedio de las " << cantidad << " calificaciones es: " << promedio << endl;
    } else {
        cout << "No se ingresaron calificaciones válidas." << endl;
    }

    cout << "Saliendo del programa..." << endl;
    return 0;
}
