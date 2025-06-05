#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Ingrese un numero para la cuenta regresiva: ";
    cin>>n;
    while (n>=0)
    {
        cout<<"la cuenta regresiva "<<n<<endl;
        n--;
    }
    cout<<"Despegueee!!!"<<endl;
    cout<<"Saliendo del programa..."<<endl;
    return 0;
}