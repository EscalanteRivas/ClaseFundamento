#include <iostream>
using namespace std;

int main(){
    int n, sum=0;
    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i = 1; i <=n; i++)
    {
        sum+=i;
    }
    cout << "La suma de los numeros del 1 al " << n << " es: " << sum << endl;
    return 0;
}