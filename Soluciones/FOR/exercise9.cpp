#include <iostream>
using namespace std;
int main(){
    for (int i = 15; i <=100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << i << " es divisible por 3 y 5." << endl;
        }
    }
    return 0;
}