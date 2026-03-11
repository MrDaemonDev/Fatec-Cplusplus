/*
Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de
conversão é F ← (9 * C + 160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

#include "iostream"
#include "cstdlib"

using namespace std;

int main() {
    system("clear");
    setlocale(LC_ALL, "Portuguese");

    double c = 0, f = 0;

    cout << "\nDigite a temperatura em C°:\n";
    cin >> c;

    f = (9 * c +160) /5;

    cout << "A conversão de " << c << "°C = " << f << "°F";
    cout << endl;

}