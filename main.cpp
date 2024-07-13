#include <iostream>
#include <cmath>

using namespace std;

/* Integrantes: Jose V�squez, Adrian Aguirre, Jonas Dominguez, Luis Espinoza*/

/* Enunciado: Realice un programa que contenga un men� de opciones y en cada opci�n ejecutara los
siguientes requerimientos.
� Un algoritmo que calcule la combinatoria. Donde n>=r>=0
Un algoritmo que calcule las permutaciones. Donde m>=n>=0
Un algoritmo que calcule el exponente de un n�mero.
Se debe usar funciones*/

// Funci�n para calcular la combinatoria
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

