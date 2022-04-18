#include <iostream>
#include "matriz.h"

using namespace std;

void CriaMatriz(Matriz &, int, int);
void ImprimeMatriz(Matriz);
void ApagaMatriz(Matriz &);
void AtribuiValor(Matriz&, int, int, float);
int Linhas(Matriz);
int Colunas(Matriz);
float SomaMatriz(Matriz);
float MaxMatriz(Matriz);
void LinhaExata(Matriz);


void CriaMatriz(Matriz &m, int lin, int col)
{
    m.lin = lin;
    m.col = col;

    m.mat = new float *[m.lin];

    for(int n=0; n<m.lin; n++)
         m.mat[n] = new float [m.col];

    float aux;
    for(int i=0; i<m.lin; i++)
    {
        for(int j=0; j<m.col; j++)
        {
            cout << "m[" << i << "][" << j << "]: ";
            cin >> aux;
            AtribuiValor(m, i, j, aux);
        }
    }
    cout << endl;
}

void ImprimeMatriz(Matriz m)
{
    for(int i=0; i<m.lin; i++)
    {
        for(int j=0; j<m.col; j++)
            cout << m.mat[i][j] << " ";
    cout << endl;
    }
}

void ApagaMatriz(Matriz &m)
{
    for(int i=0; i<m.lin; i++)
        delete[] m.mat[i];

    delete[] m.mat;
}

void LinhaExata(Matriz m)
{
    int i;

    cout << endl;
    cout << "Digite qual linha da matriz que deseja imprimir: " << endl;
    cin >> i;

    if(i > m.lin)
    {
        cout << "A matriz informada possui apenas " << m.lin << " linhas." << endl << endl;
        LinhaExata(m);
    }
    else
        for(int j=0; j<m.col; j++)
            cout << m.mat[i-1][j] << " ";

    cout << endl;
}

void ColunaExata(Matriz m)
{
    int j;

    cout << endl;
    cout << "Digite qual coluna da matriz que deseja imprimir: " << endl;
    cin >> j;

    if(j > m.col)
    {
        cout << "A matriz informada possui apenas " << m.col << " colunas." << endl << endl;
        colunaExata(m);
    }
    else
        for(int i=0; i<m.lin; i++)
            cout << m.mat[i][j-1] << " ";

    cout << endl;
}

int Linhas(Matriz m)
{
    return m.lin;
}

int Colunas(Matriz m)
{
    return m.col;
}

float SomaMatriz(Matriz m)
{
    float soma = 0;

    for(int i=0; i<m.lin; i++)
    {
        for(int j=0; j<m.col; j++)
            soma += m.mat[i][j];
    }

    return soma;
}

float MaxMatriz(Matriz m)
{
    float aux = m.mat[0][0];

    for(int i=0; i<m.lin; i++)
    {
        for(int j=0; j<m.col; j++)
        {
            if(aux < m.mat[i][j])
                aux = m.mat[i][j];
        }
    }

    return aux;
}

void AtribuiValor(Matriz m, int lin, int col, float n)
{
    m.mat[lin-1][col-1] = n;
}



