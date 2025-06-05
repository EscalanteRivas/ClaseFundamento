#include <iostream>
using namespace std;
int main(){
    int fac=1,n;
    cout<<"ingresa un numero"<<endl;
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        fac *= i; 
    }

    cout<<"El factorial de "<<n<<" es: "<<fac<<endl; 
    return 0; 
    
}