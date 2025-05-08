#include <iostream>
using namespace std;
int main(){
    int opcion;

    cout<<"Ingrese una opcion porfavor";
    cout<<"1 \n";
    cout<<"2 \n";
    cout<<"3 \n";
    cin>>opcion;

    switch (opcion)
    {
    case 1:
        cout<<"Capucchino asesino";
        break;
    case 2:
        cout<<"la vaca saturno saturnita";
        break;
    case 3:
    cout<<"tun tun tun salum";
    break;
    
    default:
     cout<<"muetete";
        break;
    }
}