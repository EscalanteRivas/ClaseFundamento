#include <iostream>
using namespace std;
int main(){
    int n, promedio;
    cout <<"Ingrese la cantidad de notas: "<<endl;
    cin >> n;

    for (int i = 0; i <n; i++)
    {
        int notas;
        cout<<"Ingrese la nota  "<<i+1<<":";
        cin>>notas;

        promedio+= notas; // Suma las notas
    }
    cout<<"El promedio es: "<<promedio/n<<endl;
    return 0;
}