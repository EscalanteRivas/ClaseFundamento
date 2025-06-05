#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));//inicializamos la semilla aleatoria
    int number = rand() % 100 + 1; //generamos un numero aleatorio entre 1 y 100
    int guess;

    cout<<"Adivina el numero entre 1 al 100"<<endl;
    cin>>guess;
    while (guess != number)
    {
        if (guess < number) {
            cout << "El numero es mayor. Intenta de nuevo: ";
        } else {
            cout << "El numero es menor. Intenta de nuevo: ";
        }
        cin >> guess;
    }
    cout << "Felicidades Adivinaste el numero: " << number << endl;
    return 0;
}
