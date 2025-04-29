#include <iostream>
using namespace std;

int main(){
    int Opcion,Resultado,Canti;
    cout<<"Conversion de Monedas"<<endl;
    cout<<"Ingrese la cantidad de dinero a convertir: ";
    cin>>Canti;

    cout<<"------------------------------------"<<endl;
    cout<<"Conversion de Monedas"<<endl;
    cout<<"Elija una opcion: "<<endl;
    cout<<"1 Dolares a Euros"<<endl;
    cout<<"2 Dolares a Yenes Japoneses"<<endl;
    cout<<"3 Dolares a Libras Esterlinas"<<endl;
    cout<<"------------------------------------"<<endl;
    cin>>Opcion;

    switch (Opcion)
    {
    case 1:
        Resultado=Canti*0.92;
        cout<<"La conversion de Dolares a euros son: "<<Resultado<<endl;
        break;
    case 2:
    Resultado=Canti*142.12;
    cout<<"La conversion de Dolares a Yenes Japoneses son: "<<Resultado<<endl;
    break;
    case 3:
        Resultado=Canti*0.75;
        cout<<"La conversion de Dolares a Libras esterlinas son: "<<Resultado<<endl;
        break;
    
    default:
        cout<<"Ingrese una opcion valida, por favor";
        break;
    }

}