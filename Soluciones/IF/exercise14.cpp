//calculadora tarifa de envio
#include <iostream>
using namespace std;

int main(){
    int peso;
    float tarifa;
    cout << "Ingrese el peso del paquete en kg: ";
    cin >> peso;
    if (peso <= 0) {
        cout << "El peso debe ser un numero positivo." << endl;
        return 1; // Salir del programa si el peso es invalido
    }else if(peso == 5){
        tarifa = 5.0;
        cout << "Tarifa de envio: $" << tarifa << endl;
    }else if(peso > 5 && peso <= 10){
        tarifa = 10.0;
        cout << "Tarifa de envio: $" << tarifa << endl;
    }else if(peso > 10 && peso <= 20){
        tarifa =15.0;
        cout << "Tarifa de envio: $" << tarifa << endl;
    }else{
        cout << "Peso fuera de rango. El peso debe ser entre 1 y 10 kg." << endl;
    }
    return 0; // Salir del programa si el peso es valido
}