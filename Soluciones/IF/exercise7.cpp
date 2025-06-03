#include <iostream>
using namespace std;

void Celscius(int a);
int main(){
    int temperatura;
    cout << "Ingrese la temperatura: ";
    cin>>temperatura;

    Celscius (temperatura);
    return 0;
}

void Celscius(int a){
    if (a<=15){
        cout<<"la temperatura es fria, me voy morir"<<endl;
    }else if (a>15 && a<=25){
        cout<<"La temperatura es templada, me voy a quedar en casa"<<endl;
    }else{
        cout<<"Estoy hot, o es el clima? xd"<<endl;
    }
}