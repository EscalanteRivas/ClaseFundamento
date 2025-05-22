#include <iostream>
using namespace std;
int main()
{
    int numeros[5] = {1, 2, 3, 4, 5}; // declaracion del arreglo
    cout << "Contenido del arreglo:" << endl;

    // recorrer el arreglo y mostrar sus elementos
    for (int i = 0; i < 5; i++)
    {
        cout << "Elemento en la posicion " << i << ":" << numeros[i] << endl;
    }

    return 0;
}