// numero mas cercano a 100
#include <iostream>
#include <cmath> // Para usar la funcion abs
using namespace std;

int distancia(int numero);
int main()
{
    int num1, num2;
    cout << "Ingrese dos numeros: " << endl;
    cin >> num1 >> num2;

    if (distancia(num1) < distancia(num2))
    {
        cout << num1 << " esta mas cerca de 100." << endl;
    }
    else if (distancia(num2) < distancia(num1))
    {
        cout << num2 << " esta mas cerca de 100." << endl;
    }
    else
    {
        cout << "Ambos estan a la misma distancia de 100." << endl;
    }

    return 0;
}

int distancia(int numero)
{
    return abs(100 - numero);
}