//velocidad y multa
#include <iostream>
using namespace std;

int main(){
    int velocidad,multa;
    cout<<"Ingrese la velocidad del vehiculo: ";
    cin>>velocidad;
    if(velocidad <=60){
        cout<<"Velocidad dentro del limite permitido."<<endl;
    } else if(velocidad > 60 && velocidad <= 80){
        multa = (velocidad - 60) * 5; // Multa de $5 por cada km/h sobre el limite
        cout<<"Velocidad excesiva. Multa: $" << multa << endl;
    } else {
        multa = (velocidad - 60) * 10; // Multa de $10 por cada km/h sobre el limite
        cout<<"Velocidad muy excesiva. Multa: $" << multa << endl;
    }
}