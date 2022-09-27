#ifndef BUSCA_H
    #define BUSCA_H
   
    #include "ordenacao.h"

    #include <stdbool.h>
    #include <stdlib.h>
    #include <stdio.h>

    int buscaBinariaId(VINHO *listaVinho, int posicaoInicial, int posicaoFinal, int chave);
    int buscaBinariaCitricAcid(VINHO *listaVinho, int posicaoInicial, int posicaoFinal, double chave);
    int buscaBinariaResidualSugar(VINHO *listaVinho, int posicaoInicial, int posicaoFinal, double chave);
    int buscaBinariaDensity(VINHO *listaVinho, int posicaoInicial, int posicaoFinal, double chave);
    int buscaBinariaPh(VINHO *listaVinho, int posicaoInicial, int posicaoFinal, double chave);
    int buscaBinariaAlcohol(VINHO *listaVinho, int posicaoInicial, int posicaoFinal, double chave);
#endif