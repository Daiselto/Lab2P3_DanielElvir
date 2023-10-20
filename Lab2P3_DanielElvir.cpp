
#include <iostream>
using namespace std;

int main() {
    int long1;
    int long2;
    int long3;
    int opTemp;
    float tempIni;
    int paridad;
    int numero;
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
            if (long1 < 0 || long2 < 0 || long3 < 0) {
                cout << "Uno de los lados que ingresó es negativo, vuelvalo a intentar" << endl;
            }else {
                if (long1 == long2 && long1 == long3 && long2 == long3) {
                    cout << "El triangulo es equilatero" << endl;
                }
                else if (long1 == long2 && long1 != long3 || long2 == long3 && long1 != long3 || long3 == long1 && long2 != long3) {
                    cout << "El triangulo es isoceles" << endl;
                }
                else if (long1 != long2 && long1 != long3 && long2 != long3) {
                    cout << "El triangulo es escaleno" << endl;
                }
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
                cout << "La temperatura en Farenheit " << tempIni * 1.8 + 32 << endl;
                cout << "La temperatura en Kelvin " << tempIni + 273.15 << endl;
            }else if (opTemp == 2) {
                cout << "Ingrese su temperatura en Fahrenheit" << endl;
                cin >> tempIni;
                cout << "La temperatura en Celsius " << (tempIni-32)/18 << endl;
                cout << "La temperatura en Kelvin " << (5/9)(tempIni-32)+273.15 << endl;
            }else if (opTemp == 3) {
                cout << "Ingrese su temperatura en Kelvin" << endl;
                cin >> tempIni;
                cout << "La temperatura en Celsius " << tempIni - 273.15 << endl;
                cout << "La temperatura en Farenheit " << 1.8*(tempIni-273.15)+32 << endl;
            }else {
                cout << "NO INGRESÓ UNA MEDIDA ADECUADA" << endl;
            }
            break;
        case 3:
            cout << "Introduce un numero (al menos 3 digitos) " << endl;
            cin >> paridad;
            if (paridad >= 100 && paridad < 1000) {
                numero = (paridad / 100) % 10;
                if (numero % 2 == 0) {
                    cout << "El digito en la posicion de las centenas es " << numero << " y es par" << endl;
                }else {
                    cout << "El digito en la posicion de las centenas es " << numero << " y es impar" << endl;
                }
            }else {
                cout << "No ingresó un numero valido" << endl;
            }
            break;
        case 4:
            cout << "Saliendo del programa...." << endl;
            break;

        default: cout << "NO INGRESÓ UNA OPCION VALIDA!!!" << endl;;
            break;
    }

}

