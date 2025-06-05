#include <iostream>
using namespace std;
int main(){
    int nota,promedio,n,limite=0,suma,i=1;
    cout<<"Ingrese la cantidad de calificaciones: ";
    cin>>n;

    while (limite<n)
    {   
        cout<<"Ingrese la calificacion n  "<<(i++)<<" : "; //esto es para que sepa por la cantidad
        cin>>nota;

        if(nota<0){
            cout<<"La calificacion no puede ser negativa. intente de nuevo "<<endl;
            i--;
        }else{
            suma += nota;
            limite++;
        }
    }
    promedio=suma/n;

    cout<<"El promedio de las calificaciones es: "<<promedio<<endl;
    cout<<"Saliendo del programa..."<<endl;
    return 0;
}