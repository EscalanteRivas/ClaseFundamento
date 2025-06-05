#include <iostream>
using namespace std;
int main(){
    int num,multiplicacion,i;
    cout<<"Ingrese su numero para hacer la tabla de multiplicar: ";
    cin>>num;

    for (i = 1; i<=10; i++)
    {
         multiplicacion = i * num;
             cout << i << " x " << num << " = " << multiplicacion << endl;
    }
    return 0;    
}