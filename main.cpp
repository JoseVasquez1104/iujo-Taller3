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
