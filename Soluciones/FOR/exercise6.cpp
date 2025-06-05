#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Ingrese un numero ";
    cin>>n;

    for (int i = 0; i <=n; i=i+2)
    {
        sum+=i;
    }
    
    cout<<"suma de los numeros pares del 0 al "<<n<<" es: "<<sum<<endl;
    return 0;
}