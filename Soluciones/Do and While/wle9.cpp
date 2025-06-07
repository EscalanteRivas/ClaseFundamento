#include <iostream>
using namespace std;
int main(){
    int n,fac=1;

    cout << "Ingrese un número para calculaar su factorial: ";
    cin >> n;

    while (n>0)
    {
        fac *= n;
        n--;
    }
    
    cout << "El factorial es: " << fac << endl;
    cout << "Saliendo del programa..." << endl;
    return 0;
}

/*
#include <iostream>
using namespace std;

int main() {
    int n, fac = 1;

    cout << "Ingrese un número para calcular su factorial: ";
    cin >> n;

    if (n < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        while (n > 0) {
            fac *= n;
            n--;
        }
        cout << "El factorial es: " << fac << endl;
    }

    cout << "Saliendo del programa..." << endl;
    return 0;
}

*/