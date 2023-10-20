
#include <iostream>
using namespace std;

int main() {
    int long1;
    int long2;
    int long3;
    int opTemp;
    float tempIni;
    cout << "Bienvenido a mi primer lab" << endl;
    cout << "1. Identificador de Triangulos" << endl;
    cout << "2. Convertidor de Temperaturas" << endl;
    cout << "3. Paridad del digito de las centenas" << endl;
    cout << "4. Salir del Programa" << endl;
    cout << "Ingrese una opcion valida" << endl;
    int opcion;
    cin >> opcion;

    switch (opcion) {
        case 1: 
            cout << "Ingrese la primera longitud: ";
            cin >> long1;
            cout << "Ingrese la segunda longitud: ";
            cin >> long2;
            cout << "Ingrese la tercera longitud: ";
            cin >> long3;
            if (long1 == long2 && long1 == long3 && long2 == long3) {
                cout << "El triangulo es equilatero" << endl;
            }else if (long1 == long2 && long1 != long3 || long2 == long3 && long1 != long3 || long3 == long1 && long2 != long3) {
                cout << "El triangulo es isoceles" << endl;
            }else if (long1 != long2 && long1 != long3 && long2 != long3) {
                cout << "El triangulo es escaleno" << endl;
            }
            break;
        case 2:
            cout << "1. Celsius" << endl;
            cout << "2. Fahrenheit" << endl;
            cout << "3. Kelvin" << endl;
            cout << "Selecciona la unidad de medidad de la temperatura a ingresar" << endl;
            cin >> opTemp;
            if (opTemp == 1) {
                cout << "Ingrese su temperatura en Celsius" << endl;
                cin >> tempIni;
                cout << "La temperatura en Farenheit " << tempIni * 1.8 + 32;
                cout << "La temperatura en Kelvin " << tempIni + 273.15;
            }else if (opTemp == 2) {
                cout << "Ingrese su temperatura en Fahrenheit" << endl;
                cin >> tempIni;
            }else if (opTemp == 3) {
                cout << "Ingrese su temperatura en Kelvin" << endl;
                cin >> tempIni;
            }else {
                cout << "NO INGRESÓ UNA MEDIDA ADECUADA" << endl;
            }
            break;
        case 3:
            break;
        case 4:
            break;

        default: cout << "NO INGRESÓ UNA OPCION VALIDA!!!" << endl;;
            break;
    }

}

