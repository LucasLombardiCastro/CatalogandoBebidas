#include <stdlib.h>
#include <stdio.h>
#include "busca.h"

int buscaBinariaCitricAcid(VINHO *listaVinho, int posicaoInicial, int posicaoFinal, double chave){
	while(posicaoInicial <= posicaoFinal){ 
		int centro = (int)((posicaoInicial+posicaoFinal)/2);
		
		if (chave == listaVinho[centro].citricAcid){
            while(listaVinho[centro].citricAcid == listaVinho[centro-1].citricAcid) // Retornado o primeiro elemento do vetor segundo chave dada
                --centro;
			return centro; 
        }
		if (chave < listaVinho[centro].citricAcid) 
			posicaoFinal = centro - 1;
		if (chave > listaVinho[centro].citricAcid) 
			posicaoInicial = centro + 1;
	}
	return -1;//valor não encontrado
}

int buscaBinariaResidualSugar(VINHO *listaVinho, int posicaoInicial, int posicaoFinal, double chave){

	while(posicaoInicial <= posicaoFinal){ 
		int centro = (int)((posicaoInicial+posicaoFinal)/2);
		
		if (chave == listaVinho[centro].residualSugar){
            while(listaVinho[centro].residualSugar == listaVinho[centro-1].residualSugar) // Retornado o primeiro elemento do vetor segundo chave dada
                --centro;
			return centro; 
        }
		if (chave < listaVinho[centro].residualSugar) 
			posicaoFinal = centro - 1;
		if (chave > listaVinho[centro].residualSugar) 
			posicaoInicial = centro + 1;
	}
	return -1;//valor não encontrado
}

int buscaBinariaDensity(VINHO *listaVinho, int posicaoInicial, int posicaoFinal, double chave){
	while(posicaoInicial <= posicaoFinal){ 
		int centro = (int)((posicaoInicial+posicaoFinal)/2);
		
		if (chave == listaVinho[centro].density){
            while(listaVinho[centro].density == listaVinho[centro-1].density) // Retornado o primeiro elemento do vetor segundo chave dada
                --centro;
			return centro; 
        }
		if (chave < listaVinho[centro].density) 
			posicaoFinal = centro - 1;
		if (chave > listaVinho[centro].density) 
			posicaoInicial = centro + 1;
	}
	return -1;//valor não encontrado
}

int buscaBinariaPh(VINHO *listaVinho, int posicaoInicial, int posicaoFinal, double chave){
	while(posicaoInicial <= posicaoFinal){ 
		int centro = (int)((posicaoInicial+posicaoFinal)/2);
		
		if (chave == listaVinho[centro].pH){
            while(listaVinho[centro].pH == listaVinho[centro-1].pH) // Retornado o primeiro elemento do vetor segundo chave dada
                --centro;
			return centro; 
        }
		if (chave < listaVinho[centro].pH) 
			posicaoFinal = centro - 1;
		if (chave > listaVinho[centro].pH) 
			posicaoInicial = centro + 1;
	}
	return -1;//valor não encontrado
}

int buscaBinariaAlcohol(VINHO *listaVinho, int posicaoInicial, int posicaoFinal, double chave){
	while(posicaoInicial <= posicaoFinal){ 
		int centro = (int)((posicaoInicial+posicaoFinal)/2);
		
		if (chave == listaVinho[centro].alcohol){
            while(listaVinho[centro].alcohol == listaVinho[centro-1].alcohol) // Retornado o primeiro elemento do vetor segundo chave dada
                --centro;
			return centro; 
        }
		if (chave < listaVinho[centro].alcohol) 
			posicaoFinal = centro - 1;
		if (chave > listaVinho[centro].alcohol) 
			posicaoInicial = centro + 1;
	}
	return -1;//valor não encontrado
}

int buscaBinariaId(VINHO *listaVinho, int posicaoInicial, int posicaoFinal, int chave){
	while(posicaoInicial <= posicaoFinal){ 
		int centro = (int)((posicaoInicial+posicaoFinal)/2);
		
		if (chave == listaVinho[centro].id){
            while(listaVinho[centro].id == listaVinho[centro-1].id) // Retornado o primeiro elemento do vetor segundo chave dada
                --centro;
			return centro; 
        }
		if (chave < listaVinho[centro].id) 
			posicaoFinal = centro - 1;
		if (chave > listaVinho[centro].id) 
			posicaoInicial = centro + 1;
	}
	return -1;//valor não encontrado
}