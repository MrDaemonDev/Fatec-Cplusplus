/*
Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um
automóvel que faz 12 Km por litro. Para obter o cálculo, o usuário deve fornecer o tempo gasto
(TEMPO) e a velocidade média (VELOCIDADE) durante a viagem. Desta forma, será possível obter a
distância percorrida com a fórmula DISTANCIA ← TEMPO * VELOCIDADE. Possuindo o valor da
distância, basta calcular a quantidade de litros de combustível utilizada na viagem com a fórmula
LITROS_USADOS ← DISTANCIA / 12. Ao final, o programa deve apresentar os valores da velocidade
média (VELOCIDADE), tempo gasto na viagem (TEMPO), a distancia percorrida (DISTANCIA) e a
quantidade de litros (LITROS_USADOS) utilizada na viagem.
*/

#include "iostream"
#include "cstdlib"
#include "math.h"

using namespace std;

int main () {
    system("clear");
    setlocale(LC_ALL, "Portuguese");

    double tempo, velocidade, distancia, litros_usados;

    cout << "\nDigite o tempo que levou em horas:";
    cin >> tempo;

    cout << "\nDigite a velocidade média:";
    cin >> velocidade;

    distancia = tempo * velocidade;

    litros_usados = distancia / 12;

    cout << "\nTempo gasto: " << tempo << " horas";
    cout << "\nVelocidade media: " << velocidade << " km/h";
    cout << "\nDistancia percorrida: " << distancia << " km";
    cout << "\nLitros de combustivel usados: " << litros_usados << " L";

    cout << endl;


}