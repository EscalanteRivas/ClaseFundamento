/* Desarrollo un programama en c++ que solicite al usuario ingresar su salario mensual bruto, y luego le permita calcular distintos descuentos obligatorios
el programa debera mostrar un menu interactivo con las siguientes opciones 1,calcular el descuento por seguro social se aplica un 3% sobre el salario pero con un tope maximo de 30$ dolares y solo los primeros mil del salario, 2. calcular el descuento por afp el cual se aplica un 7.25 sobre el sario bruto
3. calcular <la renta se calcula sobre el salario neto despues del seguro social y afp, aplicando los siguientes tramos hasta 472.99 dolares excento,de 473 a 825.24 se le aplica el 10%,
de 895.25 a 2038.10 %20, mas de 1238.10 %30, 4.calcular el total de todos los descuentos  y mostrar el monto restante luego de aplicar el seguro social y afp, renta , junto con el detalle de cada descuento*/
#include <iostream>
using namespace std;

int main() {
    int menu;
    double descuento_afp, descuento_iss, salario_bruto, salario_neto, descuento_renta, total_descuentos, salario_final;

    // Mostrar menú
    cout << "-------------------------------" << endl;
    cout << "Welcome to the program \nPlease select an option:" << endl;
    cout << "1. Calculate salary" << endl;
    cout << "2. Exit the program" << endl;
    cout << "-------------------------------" << endl;
    cin >> menu;

    switch (menu) {
        case 1: {
            // Ingresar salario bruto
            cout << "Enter your salary: ";
            cin >> salario_bruto;

            // Verificar que el salario sea válido
            if (salario_bruto > 0) {
                cout << "Valid salary entered. Starting calculations..." << endl;

                // 1. Calcular ISS (3% sobre primeros $1000, máximo $30)
                if (salario_bruto > 1000) {
                    descuento_iss = 1000 * 0.03;
                } else {
                    descuento_iss = salario_bruto * 0.03;
                }
                if (descuento_iss > 30) {
                    descuento_iss = 30;
                }

                // 2. Calcular AFP (7.25% del salario bruto)
                descuento_afp = salario_bruto * 0.0725;

                // 3. Calcular salario neto antes de renta
                salario_neto = salario_bruto - descuento_iss - descuento_afp;

                // 4. Calcular Renta según tramos
                if (salario_neto <= 472.99) {
                    descuento_renta = 0;
                } else if (salario_neto <= 895.24) {
                    descuento_renta = (salario_neto - 472.99) * 0.10;
                } else if (salario_neto <= 2038.10) {
                    descuento_renta = ((salario_neto - 895.24) * 0.20) + 42.52;
                } else {
                    descuento_renta = ((salario_neto - 2038.10) * 0.30) + 288.57;
                }

                // 5. Calcular total descuentos y salario final
                total_descuentos = descuento_iss + descuento_afp + descuento_renta;
                salario_final = salario_bruto - total_descuentos;

                // 6. Mostrar resultados
                cout << "\n------ RESUMEN DE DESCUENTOS ------" << endl;
                cout << "Salario Bruto: $" << salario_bruto << endl;
                cout << "Descuento ISS (3%): $" << descuento_iss << endl;
                cout << "Descuento AFP (7.25%): $" << descuento_afp << endl;
                cout << "Descuento Renta: $" << descuento_renta << endl;
                cout << "Total Descuentos: $" << total_descuentos << endl;
                cout << "Salario Restante (Neto): $" << salario_final << endl;
                cout << "-----------------------------------" << endl;
            } else {
                cout << "El salario ingresado no es válido. Debe ser mayor que cero." << endl;
            }
            break;
        }
        case 2:
            cout << "Exiting the program. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid option, please try again." << endl;
            break;
    }

    return 0;
}
