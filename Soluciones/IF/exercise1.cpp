#include <iostream>
using namespace std;

void confirmacion(int a);

int main()
{
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;

    confirmacion(edad);
    return 0;
}

void confirmacion(int a)
{
    if (a > 18)
    {
        cout << "Usted es mayor de edad." << endl;
    }
    else
    {
        cout << "Usted es menor de edad." << endl;
    }
}