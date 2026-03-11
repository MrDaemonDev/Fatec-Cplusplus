/*
Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius. A fórmula de
conversão é C ← (F - 32) * (5/9) , sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

#include "iostream"
#include "cstdlib"

using namespace std;

int main() {
    system("clear");
    setlocale(LC_ALL, "Portuguese");

    double f = 0, c = 0;

    cout << "\nDigite a temperatura em °F:\n";
    cin >> f;

    c = (f - 32) * (5.0/9);

    cout << "A conversão de " << f << "°F = " << c << "°C";
    cout << endl;

}