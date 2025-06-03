#include <iostream>
using namespace std;

void nota(int a);

int main(){
    int Nota;
    cout<<"Ingrese su calificacion: ";
    cin>>Nota;
    nota(Nota);
    return 0;
}

void nota(int a){
    if(a >60){
        cout<<"Aprobado."<<endl;
    }else{
        cout<<"Reprobado."<<endl;
    }
}