#include <iostream>
using namespace std;

int main(){
    int Nota;
    cout<<"Ingrese su nota: ";
    cin>>Nota;

   
    if(Nota >= 90 && Nota <= 100){
        cout<<"A"<<endl;
    } else if(Nota >= 80 && Nota < 90){
        cout<<"B"<<endl;
    } else if(Nota >= 70 && Nota < 80){
        cout<<"C"<<endl;
    } else if(Nota >= 60 && Nota < 70){
        cout<<"D"<<endl;
    } else if(Nota < 60 && Nota >= 0){
        cout<<"F"<<endl;
    } else {
        cout<<"Nota invalida."<<endl;
    }   
     return 0;
}