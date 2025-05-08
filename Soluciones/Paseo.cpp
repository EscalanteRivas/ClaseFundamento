#include <iostream>
using namespace std;

int main()
{
    int opcion, opcion1, accion, canti_Persona, comida_Cine, Hora, accion1, comida, parque;

    cout << "---Bienvenido a mi programa ---" << endl;
    cout << "Que quieres hacer ahora?" << endl;
    cout << "3 Ir al parque" << endl;
    cout << "2 Ir a comer" << endl;
    cout << "1 Ir al cine" << endl;
    cout << "0 Salir." << endl;
    cout << "-------------------------------" << endl;
    cin >> opcion;

    if (opcion > 3)
    {
        cout << "Porfavor vuelve a elegir" << endl;
    }
    else
    {
        switch (opcion)
        {
        case 0:
            cout << "Has salido del programa" << endl;
            break;
        case 1:
            cout << "---------------------------------------" << endl;
            cout << " Elegiste ir al cine :)" << endl;
            cout << "---------------------------------------" << endl;
            cout << "Esta es la cartelera de esta semana: " << endl;
            cout << "1 Karate Kid 'Leyendas'" << endl;
            cout << "2 Thunderbolts " << endl;
            cout << "3 El contador 2" << endl;
            cout << "4 Noche de terror" << endl;
            cout << "5 Pecadores" << endl;
            cout << "6 Minecraft <<--Mira esta esta :3" << endl;
            cout << "7 Ninguna,hacer otra cosa." << endl;
            cout << "---------------------------------------" << endl;
            cin >> opcion1;

            switch (opcion1)
            {
            case 1:
                cout << "---------------------------------------" << endl;
                cout << "Elegiste Karate kid 'Leyendas'" << endl;
                cout << "Cuantos boletos quieres?" << endl;
                cout << "---------------------------------------" << endl;
                cin >> canti_Persona;

                do
                {
                    cout << "---------------------------------------" << endl;
                    cout << "Quieres algo de comer?" << endl;
                    cout << "1 Si" << endl;
                    cout << "2 No" << endl;
                    cout << "---------------------------------------" << endl;
                    cin >> comida_Cine;

                    if (comida_Cine == 1)
                    {
                        cout << "---------------------------------------" << endl;
                        cout << "Que quieres comprar" << endl;
                        cout << "---------------------------------------" << endl;
                        cout << "1 Palomitas" << endl;
                        cout << "2 Palomitas + soda" << endl;
                        cout << "3 Nachos + soda" << endl;
                        cout << "---------------------------------------" << endl;
                        cin >> comida_Cine;
                    }
                    else
                    {
                        comida_Cine = false;
                    }
                } while (comida_Cine < 1 && comida_Cine > 3);
                cout << "---------------------------------------" << endl;
                cout << "Elige la hora" << endl;
                cout << "---------------------------------------" << endl;
                cout << "1  12:45PM" << endl;
                cout << "2  1:50PM" << endl;
                cout << "3  2:25PM" << endl;
                cout << "4  3:30PM" << endl;
                cout << "5  5:10PM" << endl;
                cout << "---------------------------------------" << endl;
                cin >> Hora;
                cout << "---------------------------------------" << endl;
                cout << "Esto fue lo que hiciste :3" << endl;
                cout << "---------------------------------------" << endl;
                cout << "Haz elegido ir al cine" << endl;
                cout << "Elegiste ver la pelicula : Karate kid 'leyendas" << endl;
                cout << "La hora de la pelicula es: " << Hora << endl;
                cout << "Compraste la cantidad de boletos :" << canti_Persona << endl;
                cout << "Compraste comida :" << comida_Cine << endl;
                cout << "Disfruta de la pelicula :3" << endl;
                cout << "---------------------------------------" << endl;

                break;
            case 2:
                cout << "---------------------------------------" << endl;
                cout << "Elegiste Thunderbolts" << endl;
                cout << "Cuantos boletos quieres?" << endl;
                cout << "---------------------------------------" << endl;
                cin >> canti_Persona;

                do
                {
                    cout << "---------------------------------------" << endl;
                    cout << "Quieres algo de comer?" << endl;
                    cout << "1 Si" << endl;
                    cout << "2 No" << endl;
                    cout << "---------------------------------------" << endl;
                    cin >> comida_Cine;

                    if (comida_Cine == 1)
                    {
                        cout << "---------------------------------------" << endl;
                        cout << "Que quieres comprar" << endl;
                        cout << "---------------------------------------" << endl;
                        cout << "1 Palomitas" << endl;
                        cout << "2 Palomitas + soda" << endl;
                        cout << "3 Nachos + soda" << endl;
                        cout << "---------------------------------------" << endl;
                        cin >> comida_Cine;
                    }
                    else
                    {
                        comida_Cine = false;
                    }
                } while (comida_Cine < 1 && comida_Cine > 3);
                cout << "---------------------------------------" << endl;
                cout << "Elige la hora" << endl;
                cout << "---------------------------------------" << endl;
                cout << "1  12:45PM" << endl;
                cout << "2  1:50PM" << endl;
                cout << "3  2:25PM" << endl;
                cout << "4  3:30PM" << endl;
                cout << "5  5:10PM" << endl;
                cout << "---------------------------------------" << endl;
                cin >> Hora;
                cout << "---------------------------------------" << endl;
                cout << "Esto fue lo que hiciste :3" << endl;
                cout << "---------------------------------------" << endl;
                cout << "Haz elegido ir al cine" << endl;
                cout << "Elegiste ver la pelicula : Thunderbolts" << endl;
                cout << "La hora de la pelicula es: " << Hora << endl;
                cout << "Compraste la cantidad de boletos :" << canti_Persona << endl;
                cout << "Compraste comida :" << comida_Cine << endl;
                cout << "Disfruta de la pelicula :3" << endl;
                cout << "---------------------------------------" << endl;
                break;
            case 3:
                cout << "---------------------------------------" << endl;
                cout << "Elegiste El contador 2" << endl;
                cout << "Cuantos boletos quieres?" << endl;
                cout << "---------------------------------------" << endl;
                cin >> canti_Persona;

                do
                {
                    cout << "---------------------------------------" << endl;
                    cout << "Quieres algo de comer?" << endl;
                    cout << "1 Si" << endl;
                    cout << "2 No" << endl;
                    cout << "---------------------------------------" << endl;
                    cin >> comida_Cine;

                    if (comida_Cine == 1)
                    {
                        cout << "---------------------------------------" << endl;
                        cout << "Que quieres comprar" << endl;
                        cout << "---------------------------------------" << endl;
                        cout << "1 Palomitas" << endl;
                        cout << "2 Palomitas + soda" << endl;
                        cout << "3 Nachos + soda" << endl;
                        cout << "---------------------------------------" << endl;
                        cin >> comida_Cine;
                    }
                    else
                    {
                        comida_Cine = false;
                    }
                } while (comida_Cine < 1 && comida_Cine > 3);
                cout << "---------------------------------------" << endl;
                cout << "Elige la hora" << endl;
                cout << "---------------------------------------" << endl;
                cout << "1  12:45PM" << endl;
                cout << "2  1:50PM" << endl;
                cout << "3  2:25PM" << endl;
                cout << "4  3:30PM" << endl;
                cout << "5  5:10PM" << endl;
                cout << "---------------------------------------" << endl;
                cin >> Hora;
                cout << "---------------------------------------" << endl;
                cout << "Esto fue lo que hiciste :3" << endl;
                cout << "---------------------------------------" << endl;
                cout << "Haz elegido ir al cine" << endl;
                cout << "Elegiste ver la pelicula : El contador 2" << endl;
                cout << "La hora de la pelicula es: " << Hora << endl;
                cout << "Compraste la cantidad de boletos :" << canti_Persona << endl;
                cout << "Compraste comida :" << comida_Cine << endl;
                cout << "Disfruta de la pelicula :3" << endl;
                cout << "---------------------------------------" << endl;
                break;
            case 4:
                cout << "---------------------------------------" << endl;
                cout << "Elegiste Noches de terror" << endl;
                cout << "Cuantos boletos quieres?" << endl;
                cout << "---------------------------------------" << endl;
                cin >> canti_Persona;

                do
                {
                    cout << "---------------------------------------" << endl;
                    cout << "Quieres algo de comer?" << endl;
                    cout << "1 Si" << endl;
                    cout << "2 No" << endl;
                    cout << "---------------------------------------" << endl;
                    cin >> comida_Cine;

                    if (comida_Cine == 1)
                    {
                        cout << "---------------------------------------" << endl;
                        cout << "Que quieres comprar" << endl;
                        cout << "---------------------------------------" << endl;
                        cout << "1 Palomitas" << endl;
                        cout << "2 Palomitas + soda" << endl;
                        cout << "3 Nachos + soda" << endl;
                        cout << "---------------------------------------" << endl;
                        cin >> comida_Cine;
                    }
                    else
                    {
                        comida_Cine = false;
                    }
                } while (comida_Cine < 1 && comida_Cine > 3);
                cout << "---------------------------------------" << endl;
                cout << "Elige la hora" << endl;
                cout << "---------------------------------------" << endl;
                cout << "1  12:45PM" << endl;
                cout << "2  1:50PM" << endl;
                cout << "3  2:25PM" << endl;
                cout << "4  3:30PM" << endl;
                cout << "5  5:10PM" << endl;
                cout << "---------------------------------------" << endl;
                cin >> Hora;
                cout << "---------------------------------------" << endl;
                cout << "Esto fue lo que hiciste :3" << endl;
                cout << "---------------------------------------" << endl;
                cout << "Haz elegido ir al cine" << endl;
                cout << "Elegiste ver la pelicula : Noches de terror" << endl;
                cout << "La hora de la pelicula es: " << Hora << endl;
                cout << "Compraste la cantidad de boletos :" << canti_Persona << endl;
                cout << "Compraste comida :" << comida_Cine << endl;
                cout << "Disfruta de la pelicula :3" << endl;
                cout << "---------------------------------------" << endl;
                break;
            case 5:
                cout << "---------------------------------------" << endl;
                cout << "Elegiste ver Pecadores" << endl;
                cout << "Cuantos boletos quieres?" << endl;
                cout << "---------------------------------------" << endl;
                cin >> canti_Persona;

                do
                {
                    cout << "---------------------------------------" << endl;
                    cout << "Quieres algo de comer?" << endl;
                    cout << "1 Si" << endl;
                    cout << "2 No" << endl;
                    cout << "---------------------------------------" << endl;
                    cin >> comida_Cine;

                    if (comida_Cine == 1)
                    {
                        cout << "---------------------------------------" << endl;
                        cout << "Que quieres comprar" << endl;
                        cout << "---------------------------------------" << endl;
                        cout << "1 Palomitas" << endl;
                        cout << "2 Palomitas + soda" << endl;
                        cout << "3 Nachos + soda" << endl;
                        cout << "---------------------------------------" << endl;
                        cin >> comida_Cine;
                    }
                    else
                    {
                        comida_Cine = false;
                    }
                } while (comida_Cine < 1 && comida_Cine > 3);
                cout << "---------------------------------------" << endl;
                cout << "Elige la hora" << endl;
                cout << "---------------------------------------" << endl;
                cout << "1  12:45PM" << endl;
                cout << "2  1:50PM" << endl;
                cout << "3  2:25PM" << endl;
                cout << "4  3:30PM" << endl;
                cout << "5  5:10PM" << endl;
                cout << "---------------------------------------" << endl;
                cin >> Hora;
                cout << "---------------------------------------" << endl;
                cout << "Esto fue lo que hiciste :3" << endl;
                cout << "---------------------------------------" << endl;
                cout << "Haz elegido ir al cine" << endl;
                cout << "Elegiste ver la pelicula : Pecadores" << endl;
                cout << "La hora de la pelicula es: " << Hora << endl;
                cout << "Compraste la cantidad de boletos :" << canti_Persona << endl;
                cout << "Compraste comida :" << comida_Cine << endl;
                cout << "Disfruta de la pelicula :3" << endl;
                cout << "---------------------------------------" << endl;
                break;
            case 6:
                cout << "---------------------------------------" << endl;
                cout << "Elegiste Minecraft" << endl;
                cout << "Cuantos boletos quieres?" << endl;
                cout << "---------------------------------------" << endl;
                cin >> canti_Persona;

                do
                {
                    cout << "---------------------------------------" << endl;
                    cout << "Quieres algo de comer?" << endl;
                    cout << "1 Si" << endl;
                    cout << "2 No" << endl;
                    cout << "---------------------------------------" << endl;
                    cin >> comida_Cine;

                    if (comida_Cine == 1)
                    {
                        cout << "---------------------------------------" << endl;
                        cout << "Que quieres comprar" << endl;
                        cout << "---------------------------------------" << endl;
                        cout << "1 Palomitas" << endl;
                        cout << "2 Palomitas + soda" << endl;
                        cout << "3 Nachos + soda" << endl;
                        cout << "---------------------------------------" << endl;
                        cin >> comida_Cine;
                    }
                    else
                    {
                        comida_Cine = false;
                    }
                } while (comida_Cine < 1 && comida_Cine > 3);
                cout << "---------------------------------------" << endl;
                cout << "Elige la hora" << endl;
                cout << "---------------------------------------" << endl;
                cout << "1  12:45PM" << endl;
                cout << "2  1:50PM" << endl;
                cout << "3  2:25PM" << endl;
                cout << "4  3:30PM" << endl;
                cout << "5  5:10PM" << endl;
                cout << "---------------------------------------" << endl;
                cin >> Hora;
                cout << "---------------------------------------" << endl;
                cout << "Esto fue lo que hiciste :3" << endl;
                cout << "---------------------------------------" << endl;
                cout << "Haz elegido ir al cine" << endl;
                cout << "Elegiste ver la pelicula : Minecraft" << endl;
                cout << "La hora de la pelicula es: " << Hora << endl;
                cout << "Compraste la cantidad de boletos :" << canti_Persona << endl;
                cout << "Compraste comida :" << comida_Cine << endl;
                cout << "Disfruta de la pelicula :3" << endl;
                cout << "---------------------------------------" << endl;
                break;
            case 7:
                cout << "Quieres ir al bathroom?" << endl;
                cout << "1 Si" << endl;
                cout << "2 No" << endl;
                cin >> accion1;

                if (accion1 == 1)
                {
                    cout << "Has ido al bathroom, Felicidades :3" << endl;
                }
                else
                {
                    return 0;
                }
                break;
            default:
                break;
            }

            break;
        case 2:
            cout << "-------------------------------" << endl;
            cout << "Elegiste ir a comer" << endl;
            cout << "-------------------------------" << endl;
            cout << "Elige que quieres comer :3" << endl;
            cout << "1 Ir a KFC" << endl;
            cout << "2 Ir a BurgerKing" << endl;
            cout << "3 Ir a PizzaHut" << endl;
            cout << "-------------------------------" << endl;
            cin >> comida;

            switch (comida)
            {
            case 1:
                cout << "Te comiste un econocombo del kfc \n saliste del programa" << endl;
                break;
            case 2:
                cout << "te comiste una wopper doble carne , rico :3 \n saliste del programa" << endl;
                break;
            case 3:
                cout << "Te pediste una pizza personal + soda \n saliste del programa" << endl;
                break;
            default:
                break;
            }

            cout << "-------------------------------" << endl;

            break;
        case 3:
            cout << "-------------------------------" << endl;
            cout << "Elegiste ir al parque" << endl;
            cout << "-------------------------------" << endl;
            cout << "Elige a que parque quieres ir" << endl;
            cout << "1 Parque Nacional El Boqueron" << endl;
            cout << "2 Parque Cuscatlan" << endl;
            cout << "3 Parque de la familia" << endl;
            cout << "-------------------------------" << endl;
            cin >> parque;

            switch (parque)
            {
            case 1:
                cout << "Fuiste al Parque Nacional EL Boqueron \n te caiste " << endl;
                break;
            case 2:
                cout << "Fuiste al Parque Cuscatlan \n te compraste una pizza siciliana " << endl;
                break;
            case 3:
                cout << "Fuiste al Parque de la Familia \n ... ni idea :v " << endl;
                break;

            default:
                break;
            }
            break;

        default:
            break;
        }
    }
    return 0;
}