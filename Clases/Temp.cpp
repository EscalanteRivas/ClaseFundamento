#include <iostream>
using namespace std;

// escribir una funcion que convierta los que convierta los grados celsuis a fahrenheit
int converT(int n)
{
    return (n * 9 / 5) + 32; // Fórmula para convertir Celsius a Fahrenheit
}

int main()
{
    int a;
    cout << "Ingrese los grados Celsius:" <<endl;
    cin >> a;

    cout << "Los grados Fahrenheit son: " << converT(a) << endl;
    return 0;
}