#include "iostream"
#include "math.h"
#include "cstdlib"

using namespace std;

int main() {
    system("clear");
    setlocale(LC_ALL, "Portuguese");

    double nota1=0, nota2=0, media=0;

    cout << "\nDigite a nota 1 :\n";
    cin >> nota1;

    cout << "\nDigite as nota 2 :\n";
    cin >> nota2;

    media = (nota1 + nota2)/2;

    cout << "\nO resultado será : " << media;
    cout << endl;

    std::cin.get();

    return 0;
}