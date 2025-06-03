#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Introduce el número de términos de la serie de Fibonacci: ";
    cin >> N;

    int a = 0, b = 1; //declara las variables a y b, para realiziar la suma
    for (int i = 0; i < N; i++) { //esta es la cantidad de N que se repetira el for, por lo que se le pide al usuario
        cout << a << " "; //esto es para mostrar el resultado de la serie
        int siguiente = a + b; //siguiente es la suma de a y b
        a = b; //a es igual a b, por lo que se le asigna el valor de b 
        b = siguiente; // b es igual a la suma de a y b, por lo que se le asigna el valor de siguiente
    }
    cout << endl;
    return 0;
}