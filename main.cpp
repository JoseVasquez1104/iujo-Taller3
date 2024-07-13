#include <iostream>
#include <cmath>

using namespace std;

/* Integrantes: Jose Vásquez, Adrian Aguirre, Jonas Dominguez, Luis Espinoza*/

/* Enunciado: Realice un programa que contenga un menú de opciones y en cada opción ejecutara los
siguientes requerimientos.
• Un algoritmo que calcule la combinatoria. Donde n>=r>=0
Un algoritmo que calcule las permutaciones. Donde m>=n>=0
Un algoritmo que calcule el exponente de un número.
Se debe usar funciones*/

// Función para calcular la combinatoria
long long combinatoria(int n, int r) {
    if (r > n || r < 0 || n < 0) {
        cout << "Error: n >= r >= 0 no se cumple" << endl;
        return -1;
    }
    long long resultado = 1;
    for (int i = 1; i <= r; i++) {
        resultado = resultado * (n - i + 1) / i;
    }
    return resultado;
}

// Función para calcular las permutaciones
long long permutaciones(int m, int n) {
    if (n > m || n < 0 || m < 0) {
        cout << "Error: m >= n >= 0 no se cumple" << endl;
        return -1;
    }
    long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado = resultado * (m - i + 1);
    }
    return resultado;
}

// Función para calcular el exponente de un número
double exponente(double a, int n) {
    if (n < 0) {
        cout << "Error: n debe ser un número entero positivo" << endl;
        return -1;
    }
    return pow(a, n);
}

int main() {
    int opcion;
    do {
        cout << "Menú de opciones:" << endl;
        cout << "1. Calcular combinatoria" << endl;
        cout << "2. Calcular permutaciones" << endl;
        cout << "3. Calcular exponente" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int n, r;
                cout << "Ingrese el valor de n: ";
                cin >> n;
                cout << "Ingrese el valor de r: ";
                cin >> r;
                long long resultado = combinatoria(n, r);
                if (resultado!= -1) {
                    cout << "La combinatoria de " << n << " y " << r << " es: " << resultado << endl;
                }
                break;
            }
            case 2: {
                int m, n;
                cout << "Ingrese el valor de m: ";
                cin >> m;
                cout << "Ingrese el valor de n: ";
                cin >> n;
                long long resultado = permutaciones(m, n);
                if (resultado!= -1) {
                    cout << "Las permutaciones de " << m << " y " << n << " son: " << resultado << endl;
                }
                break;
            }
            case 3: {
                double a;
                int n;
                cout << "Ingrese el valor de a: ";
                cin >> a;
                cout << "Ingrese el valor de n: ";
                cin >> n;
                double resultado = exponente(a, n);
                if (resultado!= -1) {
                    cout << "El exponente de " << a << " elevado a " << n << " es: " << resultado << endl;
                }
                break;
            }
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
        }
    } while (opcion!= 4);

    return 0;
}
