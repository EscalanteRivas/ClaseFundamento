#include <iostream>
using namespace std;
int main(){
    int n, sum=0;
    cout << "Ingrese un numero (0 para terminar): ";
    cin >> n;

    while (n >0) {
        sum += n;
        cout << "Ingrese otro numero (0 para terminar): "; 
        cin >> n;
    }
    cout<<"la suma de los numeros es : "<<sum<<endl;
   return 0;  
}