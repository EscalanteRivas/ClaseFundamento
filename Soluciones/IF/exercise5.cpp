#include <iostream>
using namespace std;

void solve(int a, float b);

int main()
{
    int monto;
    float descuento = 0.1;
    cout << "Ingrese el monto de la compra: ";
    cin >> monto;

    solve(monto, descuento);
    return 0;
}

void solve(int a, float b)
{
    if (a > 100)
    {
        float total= a-(a * b);
        cout << "Su compra es valida para descuendo del 10% \n Su total a pagar $ "<<total << endl;
    }
    else
    {
        cout << "No aplica a descuento." << endl;
    }
}