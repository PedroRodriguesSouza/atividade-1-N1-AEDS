//Código de definição: Matriz.h

#ifndef MATRIZ_H
#define MATRIZ_H

//Definição do tipo

typedef struct
{
    int lin; //Número de linhas da matriz
    int col; //Número de colunas da matriz
    float **mat; //Matriz
} Matriz;

void CriaMatriz(Matriz &, int, int); //Cria matriz NxM dinamicamente - ponteiros
void ImprimeMatriz(Matriz); //Imprime a matriz - Linha a linha
void ApagaMatriz(Matriz &); //Apaga a matriz criada dinamicamnete
void AtribuiValor(Matriz, int, int, float); //Atribui o valor float na posição int, int(linha, coluna)
int Linhas(Matriz); //Retorna o número de linhas da matriz
int Colunas(Matriz); //Retorna o número de colunas da matriz
float SomaMatriz(Matriz); //Retorna a soma de todos os elementos da matriz
float MaxMatriz(Matriz); //Retorna o maior valor de uma matriz
void LinhaExata(Matriz); //Retorna todos os elementos da linha desejada

#endif
