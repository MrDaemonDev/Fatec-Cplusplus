#include "iostream"
#include "cstdlib"
#include "math.h"

using namespace std;

int main () {
    system ("clear");
    setlocale (LC_ALL, "Portuguese");

    double volume, comprimento, largura, altura;

    cout << "Informe o comprimento: ";
    cin >> comprimento;

    cout << "Informe o largura: ";
    cin >> largura;

    cout << "Informe o altura: ";
    cin >> altura;

    volume = comprimento * largura * altura;

    cout << "O volume é " << volume << endl;
}
