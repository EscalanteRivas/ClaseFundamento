#include <iostream>
using namespace std;

int main() {
    int numero, digitos = 0;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El numero debe ser positivo" << endl;
    } else if (numero == 0) {
        cout << "El numero tiene 1 digito" << endl;
    } else {
        while (numero > 0) {
            numero /= 10;
            digitos++;
        }
        cout << "El numero tiene " << digitos << " digitos" << endl;
    }

    cout << "Saliendo del programa..." << endl;
    return 0;
}
