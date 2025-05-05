#include <iostream>
using namespace std;

int main(){
    int num1,num2,resultado;
    char opcion;

    cout<<"Ingrese el primer numero : "<<endl;
    cin>>num1;
    cout<<"Ingrese el segundo numero : "<<endl;
    cin>>num2;

    cout<<"Seleccione una operacion: "<<endl;
    cout<<"a Suma "<<endl;
    cout<<"b Resta "<<endl;
    cout<<"c Multiplicacion"<<endl;
    cout<<"d Divicion "<<endl;
    cin>>opcion;

    switch (opcion)
    {
    case 'a':
        resultado=num1+num2;
        cout<<"La suma de los numeros es: "<<resultado<<endl;
    break;
    case 'b':
        resultado=num1-num2;
        cout<<"La resta de los numeros es: "<<resultado<<endl;
    break;
    case 'c':
        resultado=num1*num2;
        cout<<"La multiplicacion de los numeros es: "<<resultado<<endl;
    break;
    case 'd':
        if(num2 !=0){
            resultado=num1/num2;
            cout<<"El resultado de la division es : "<<resultado<<endl;
        }else{
            cout<<"Error: Division por cero no permitida.";
        }
    break;
    default:
     cout<<"Opcion no valida, Porfavor elija una opcion";
        break;
    }if(resultado>0){
        cout<<"El resultado es positivo."<<endl;
    }else if(resultado<0){
        cout<<"El resultado es negativo."<<endl;
    }else{
        cout<<"El resultado es cero."<<endl;
    }
    return 0;
}