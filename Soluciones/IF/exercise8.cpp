#include <iostream>
using namespace std;

void login(string usser, string pass, string password, string user);

int main()
{
    string password = "Minecraft", usser = "admin", pass, user;

    do
    {
        cout << "Ingrese el usuario: ";
        cin >> user;
        cout << "Ingrese la contraseña: ";
        cin >> pass;
        login(usser, pass, password, user);

    } while (user != usser || pass != password);

    return 0;
}

void login(string usser, string pass, string password, string user)
{

    if (user == usser && pass == password)
    {
        cout << "Bienvenido al sistema" << endl;
    }
    else
    {
        cout << "Usuario o contraseña incorrectos \n vuelva a intentarlo... \n"
             << endl;
    }
}