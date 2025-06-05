#include <iostream>
using namespace std;
int main(){
    int n, sum=0,i=0;
    cout<<"Ingrese un numero"<<endl;
    cin>>n;

    while (i<n)
    {
        i++;
        if(i %2 ==0){
            sum+=i;
        }
    }
    cout<<"La suma de los numeros pares del 1 al "<<n<<" es: "<<sum<<endl;
    cout<<"Saliendo del programa..."<<endl;
    return 0;
}