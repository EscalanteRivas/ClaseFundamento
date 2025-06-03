#include <iostream>
using namespace std;

//funciones que suma dos numeros enterors, arriba se tiene que hacer la funcion
bool esPar(int n){
    return n % 2 == 0;
}

int main(){
    int numero= 10;

    if (esPar(numero)) {
        cout << "El numero " << numero << " es par." << endl;
    } else {
        cout << "El numero " << numero << " es impar." << endl;
    }
}
