
#include <iostream>
using namespace std;

int main() {
    int long1;
    int long2;
    int long3;
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
            }else if (long1 == long2 && long2 == long3 && long1 != long3 || long2 == long3 && long1 == long3 && long2 != long3) {
                cout << "El triangulo es isoceles" << endl;
            }else if (long1 != long2 && long1 != long3 && long2 != long3) {
                cout << "El triangulo es escaleno" << endl;
            }
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;

        default: cout << "NO INGRESÓ UNA OPCION VALIDA!!!" << endl;;
            break;
    }

}

