#include <iostream>
using namespace std;


int main(){
    int opcion;
    cout<< "Menu de opciones:\n";
    cout<< "1. Comida China\n";
    cout<< "2. Lilu Ceaser\n";
    cout<< "3. Papa jhon\n";
    cout<< "4. Salir\n";
    cin>>opcion;

    while (opcion !=4)
    {
       switch(opcion) {
        case 1:
            cout << "Usted ha seleccionado Comida China.\n";
            break;
        case 2:
            cout << "Usted ha seleccionado Lilu Ceaser.\n";
            break;
        case 3:
            cout << "Usted ha seleccionado Papa Jhon.\n";
            break;
        default:
            cout << "Opción inválida. Por favor intente de nuevo.\n";
    }

    cout<< "\nMenu de opciones:\n";
    cout<< "1. Comida China\n";
    cout<< "2. Lilu Ceaser\n";
    cout<< "3. Papa jhon\n";
    cout<< "4. Salir\n";
    cin >> opcion;
    }
    
    cout<<"Gracias por usar el menu de opciones.\n";
    cout<<"Saliendo del programa...\n";
    return 0;
}

