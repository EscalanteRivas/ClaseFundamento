#include <iostream>
using namespace std;

void semana(int a);

int main(){
    int Dia;
    cout << "Ingrese un numero del 1 al 7: ";
    cin >> Dia;

    semana(Dia);
    return 0;
}

void semana(int a){
    if (a>1 && a<=5){
        cout<<"Corresponde a un dia laboral. "<<endl;
    }else{
        cout<<"Corresponde a un dia de descanso. "<<endl;
    }
}