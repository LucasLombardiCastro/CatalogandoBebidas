#ifndef ORDENACAO_H
    #define ORDENACAO_H
   
    typedef struct VINHO{
    int id;
    double citricAcid;
    double residualSugar;
    double density;
    double pH;
    double alcohol;
} VINHO;

    #include <stdbool.h>
    #include <stdlib.h>
    #include <stdio.h>

    void listaVinho_ordenar(VINHO *l, char caracteristica[20], int quantidadeElementos);
    void lista_swapVinhos(VINHO *listaVinho, int posicaoVinhoA, int posicaoVinhoB);
#endif