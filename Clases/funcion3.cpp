#include <iostream>
using namespace std;

//una funcion arriba del main se le llama constructor, funcion que devuelve el mayor de 3 numeros
int mayorDeTres(int a, int b, int c){
    if (a > b && a > c) {
        return a;
    } else if (b > c) {
        return b;
    } else {
        return c;
    }
    

    return 0; // Esto es opcional, pero es una buena práctica para evitar advertencias de compilación.
}