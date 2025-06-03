#include <iostream>
using namespace std;

void compa(int a, int b);

int main()
{
    int num1, num2;
    cout << "Ingrese 2 numeros porfavor: ";
    cin >> num1 >> num2;
    compa(num1, num2);
    return 0;
}

void compa(int a, int b)
{
    if (a > b)
    {
        cout << "El numero num1  " << a << " es mayor que num2 " << b << endl;
    }
    else if (a < b)
    {
        cout << "El numero num2 " << b << " es mayor que  num1 " << a << endl;
    }
    else
    {
        cout << "Los numeros son iguales. " << endl;
    }
}