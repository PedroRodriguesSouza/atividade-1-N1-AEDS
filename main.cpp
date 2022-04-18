#include <iostream>
#include "matriz.h"

using namespace std;

int main()
{

    Matriz matriz;
    int l, c, nlin, ncol;
    float soma, maior;

    cout << "Digite a dimensao da matriz (linhas/colunas): ";
    cin >> l >> c;
    cout << endl;

    CriaMatriz(matriz, l, c);
    ImprimeMatriz(matriz);
    AtribuiValor(matriz, 2, 2, 9);
    //LinhaExata(matriz);
    //ColunaExata(matriz);
    nlin = Linhas(matriz);
    ncol = Colunas(matriz);
    soma = SomaMatriz(matriz);
    maior = MaxMatriz(matriz);

    cout << endl << "Numero de linhas da matriz: " << nlin << endl;
    cout << endl << "Numero de colunas da matriz: " << ncol << endl;
    cout << endl << "Soma de elementos da matriz: " << soma << endl;
    cout << endl << "Maior elemento da matriz: " << maior << endl;

    ApagaMatriz(matriz);

    return 0;
}
