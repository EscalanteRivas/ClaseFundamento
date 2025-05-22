#include <iostream>
using namespace std;
int main(){
    int contador;
    cin>>contador; //guardar numero ingresado en while

    while (contador<=5)
    {
        cout<<"contador en while: " << contador <<endl;
        contador++;
    }
    
    return 0;
}