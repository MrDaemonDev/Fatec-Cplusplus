/*
Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula:
Volume <-- pi * Raio ^2 * Altura
*/

#include "iostream"
#include "cstdlib"
#include "math.h"
#define pi 3.14

using namespace std;

int main() {
    system("clear");
    setlocale(LC_ALL, "Portuguese");

    double volume, raio, altura;

    cout << "\nDigite o valor do raio:\n";
    cin >> raio;

    cout << "\nDigite o valor da altura:\n";
    cin >> altura;

    volume = pi * pow(raio,2) * altura;

    cout << "O volume é igual a " << volume << endl;
}