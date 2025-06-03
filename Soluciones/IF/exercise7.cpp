#include <iostream>
using namespace std;

// Declaración de función
string temperatura(int Temperatura);

int main() {
    int tempera;
    cout << "Ingrese la temperatura: ";
    cin >> tempera;

    string mensaje = temperatura(tempera);
    cout << mensaje << endl;

    return 0;
}

// Definición de función
string temperatura(int Temperatura) {
    if (Temperatura <= 15) {
        return "La temperatura es fría, me voy a morir";
    } else if (Temperatura <= 25) {
        return "La temperatura es templada, me voy a quedar en casa";
    } else {
        return "Estoy hot, ¿o es el clima? xd";
    }
}
