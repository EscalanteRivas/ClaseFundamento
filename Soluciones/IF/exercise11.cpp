#include <iostream>
using namespace std;

int diferencia(int a, int b, int c);

int main(){
    int x,y,z;
    cout<<"Ingrese los tres lados de un triangulo: ";
    cin>>x>>y>>z;
    if(diferencia(x,y,z) == 0){
        cout<<"Los lados forman un triangulo equilatero."<<endl;
    } else if(diferencia(x,y,z) == 1){
        cout<<"Los lados forman un triangulo isosceles."<<endl;
    } else {
        cout<<"Los lados forman un triangulo escaleno."<<endl;
    }
    return 0;
}

int diferencia(int a, int b, int c){
    if(a == b && b == c){
        return 0; // Triangulo equilatero
    } else if(a == b || b == c || a == c){
        return 1; // Triangulo isosceles
    } else {
        return 2; // Triangulo escaleno
    }
}