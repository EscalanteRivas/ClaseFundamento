#include <iostream>
using namespace std;

int main(){
    int promedio,faltas;
    cout<<"Ingrese su promedio: ";
    cin>>promedio;
    cout<<"Ingrese el numero de faltas: ";
    cin>>faltas;

    if(promedio >=85 && faltas < 3){
        cout<<"Eres acreedor de una beca."<<endl;
    }else if(promedio <85 && faltas > 3){
        cout<<"No eres acreedor de una beca. "<<endl;
    }else{
        cout<<"No eres acreedor de una beca, pero puedes intentarlo de nuevo el proximo semestre."<<endl;
    }
    return 0;
}