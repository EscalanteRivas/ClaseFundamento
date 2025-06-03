#include <iostream>
using namespace std;

void Num(int Nuro);

int main()
{
    int numero;
    cout << "ingrese un numero: ";
    cin >> numero;

    Num(numero);
    return 0;
}

void Num(int Nuro)
{
    if (Nuro % 2 == 0)
    {
        cout << "El numero es par." << endl;
    }
    else
    {
        cout << "El numero es impar." << endl;
    }
}