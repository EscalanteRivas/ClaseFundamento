#include <iostream>
using namespace std;

int main(){
     int res,n; //inializacion a las variables

     cout<<"Ingrese un valor entero porfavor "; //ingresa un valor a un variable
     cin>>n;

     res=n%2; //sacar el residuo 

     switch (n)
     {
     case 1:
        cout<<n<<"Es un numero impar \n";
        break;
     case 2:
        cout<<n<<"Es un numero par \n";
     break;
     default:
      cout<<"Ingrese datos correctos porfavor";
        break;
     }

}