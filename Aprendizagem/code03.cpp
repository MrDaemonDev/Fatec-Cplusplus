#include "iostream"
#include "cstdlib"

using namespace std;

double const pi = 3.14;
double altura = 5.55;

void verVolume ( double raio );

int main() {
    double raio = 10.5;
    verVolume ( raio );

    verVolume ( 13.4 );
    system("sleep 5");

    return 0;
}


void verVolume ( double raio ){
    double volume = raio * raio * pi * altura;

    cout << "\nVolume : " << volume << endl;
    system("sleep 5");

    return;
}