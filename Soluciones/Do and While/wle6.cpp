//verificacion de contraseña
#include <iostream>
using namespace std;
int main(){
    string password = "HolaMundo";
    string intento;
    cout << "Ingrese la contraseña: ";
    cin >> intento;

    while(intento != password){
        cout<< "Contraseña incorrecta. Intente de nuevo: ";
        cin>>intento;
    }
    cout<<"Contraseña correcta. Acceso concedido."<<endl;

 return 0;
}