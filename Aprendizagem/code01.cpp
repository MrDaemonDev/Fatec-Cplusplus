#include "iostream"
#include "math.h"
#include "cstdlib"

#define pi 3.14 // cria constante pi com #define

using namespace std;

int main() {
    system("clear");
    setlocale(LC_ALL, "Portuguese");

    // double const pi = 3.14;
    double resultado = pi * 10;

    cout << "\nO resultado será : " << resultado << endl;
    std::cin.get();

    return 0;
}