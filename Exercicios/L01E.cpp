#include "iostream"
#include "cstdlib"
#include "math.h"

using namespace std;

int main () {
    system ("clear");
    setlocale (LC_ALL, "Portuguese");

    double prestacao, valor, taxa, tempo;

    cout << "Digite o valor do prestacao: ";
    cin >> valor;

    cout << "Digite o em quantas parcelas é a prestação: ";
    cin >> tempo;

    cout << "Digite o taxa do prestação: ";
    cin >> taxa;

    prestacao = valor + (valor * taxa/100) * tempo;

    cout << "O valor da prestação ficou " << prestacao << endl;




}
