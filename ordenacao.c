#include <stdlib.h>
#include <string.h>

#include "ordenacao.h"

// Ordenando segundo uma caracteristica dada
void listaVinho_ordenar(VINHO *listaVinho, char *caracteristica, int quantidadeElementos){
    int i;

    // Ordenando pelo citricAcid
    if(strcmp(caracteristica, "citric_acid") == 0){
        int posicaoMaior = 0;

        // Percorrendo o Vetor para encontrar o elemento com o maior citricAcid
        for(i = 0; i < quantidadeElementos; ++i){
            if(listaVinho[i].citricAcid > listaVinho[posicaoMaior].citricAcid) 
                posicaoMaior = i;
            // Caso onde o CitricAcid de ambos os elementos sao iguais
            else if(listaVinho[i].citricAcid == listaVinho[posicaoMaior].citricAcid)
                if(listaVinho[i].id > listaVinho[posicaoMaior].id) 
                    posicaoMaior = i;  
        }
        
        lista_swapVinhos(listaVinho, posicaoMaior, quantidadeElementos-1); // Invertendo o elemento com maior citricAcid com o ultimo elemento
        
        // Primeiro for deixa fixado o ultimo elemento nao ordenado
        for(int posicaoElementoAtual = quantidadeElementos-2; posicaoElementoAtual > 0; --posicaoElementoAtual){
            posicaoMaior = posicaoElementoAtual;

            // Segundo for encontra entre os elementos anteriores ao elemento fixado o elemento com maior citricAcid
            for(i = 0; i < posicaoElementoAtual; ++i){
                if(listaVinho[i].citricAcid > listaVinho[posicaoMaior].citricAcid)
                    posicaoMaior = i;
                
                else if(listaVinho[i].citricAcid == listaVinho[posicaoMaior].citricAcid){
                    if(listaVinho[i].id > listaVinho[posicaoMaior].id) 
                        posicaoMaior = i;  
                }
            }

            // Invertemos o elemento com maior citricAcid com o elemento fixado
            lista_swapVinhos(listaVinho, posicaoMaior, posicaoElementoAtual);
        }
    }

    // Ordenando pelo residualSugar
   if(strcmp(caracteristica, "residual_sugar") == 0){
        int posicaoMaior = 0;

        // Percorrendo o Vetor para encontrar o elemento com o maior residualSugar
        for(i = 0; i < quantidadeElementos; ++i){
            if(listaVinho[i].residualSugar > listaVinho[posicaoMaior].residualSugar) 
                posicaoMaior = i;
            // Caso onde o residualSugar de ambos os elementos sao iguais
            else if(listaVinho[i].residualSugar == listaVinho[posicaoMaior].residualSugar)
                if(listaVinho[i].id > listaVinho[posicaoMaior].id) 
                    posicaoMaior = i;  
        }
        
        lista_swapVinhos(listaVinho, posicaoMaior, quantidadeElementos-1); // Invertendo o elemento com maior residualSugar com o ultimo elemento
        
        // Primeiro for deixa fixado o ultimo elemento nao ordenado
        for(int posicaoElementoAtual = quantidadeElementos-2; posicaoElementoAtual > 0; --posicaoElementoAtual){
            posicaoMaior = posicaoElementoAtual;

            // Segundo for encontra entre os elementos anteriores ao elemento fixado o elemento com maior residualSugar
            for(i = 0; i < posicaoElementoAtual; ++i){
                if(listaVinho[i].residualSugar > listaVinho[posicaoMaior].residualSugar)
                    posicaoMaior = i;
                
                else if(listaVinho[i].residualSugar == listaVinho[posicaoMaior].residualSugar){
                    if(listaVinho[i].id > listaVinho[posicaoMaior].id) 
                        posicaoMaior = i;  
                }
            }

            // Invertemos o elemento com maior residualSugar com o elemento fixado
            lista_swapVinhos(listaVinho, posicaoMaior, posicaoElementoAtual);
        }
    }

    // Ordenando pelo density
    if(strcmp(caracteristica, "density") == 0){
        int posicaoMaior = 0;

        // Percorrendo o Vetor para encontrar o elemento com o maior density
        for(i = 0; i < quantidadeElementos; ++i){
            if(listaVinho[i].density > listaVinho[posicaoMaior].density) 
                posicaoMaior = i;
            // Caso onde o density de ambos os elementos sao iguais
            else if(listaVinho[i].density == listaVinho[posicaoMaior].density)
                if(listaVinho[i].id > listaVinho[posicaoMaior].id) 
                    posicaoMaior = i;  
        }
        
        lista_swapVinhos(listaVinho, posicaoMaior, quantidadeElementos-1); // Invertendo o elemento com maior density com o ultimo elemento
        
        // Primeiro for deixa fixado o ultimo elemento nao ordenado
        for(int posicaoElementoAtual = quantidadeElementos-2; posicaoElementoAtual > 0; --posicaoElementoAtual){
            posicaoMaior = posicaoElementoAtual;

            // Segundo for encontra entre os elementos anteriores ao elemento fixado o elemento com maior density
            for(i = 0; i < posicaoElementoAtual; ++i){
                if(listaVinho[i].density > listaVinho[posicaoMaior].density)
                    posicaoMaior = i;
                
                else if(listaVinho[i].density == listaVinho[posicaoMaior].density){
                    if(listaVinho[i].id > listaVinho[posicaoMaior].id) 
                        posicaoMaior = i;  
                }
            }

            // Invertemos o elemento com maior density com o elemento fixado
            lista_swapVinhos(listaVinho, posicaoMaior, posicaoElementoAtual);
        }
    }

    // Ordenando pelo pH
    if(strcmp(caracteristica, "pH") == 0){
        int posicaoMaior = 0;

        // Percorrendo o Vetor para encontrar o elemento com o maior pH
        for(i = 0; i < quantidadeElementos; ++i){
            if(listaVinho[i].pH > listaVinho[posicaoMaior].pH) 
                posicaoMaior = i;
            // Caso onde o pH de ambos os elementos sao iguais
            else if(listaVinho[i].pH == listaVinho[posicaoMaior].pH)
                if(listaVinho[i].id > listaVinho[posicaoMaior].id) 
                    posicaoMaior = i;  
        }
        
        lista_swapVinhos(listaVinho, posicaoMaior, quantidadeElementos-1); // Invertendo o elemento com maior pH com o ultimo elemento
        
        // Primeiro for deixa fixado o ultimo elemento nao ordenado
        for(int posicaoElementoAtual = quantidadeElementos-2; posicaoElementoAtual > 0; --posicaoElementoAtual){
            posicaoMaior = posicaoElementoAtual;

            // Segundo for encontra entre os elementos anteriores ao elemento fixado o elemento com maior pH
            for(i = 0; i < posicaoElementoAtual; ++i){
                if(listaVinho[i].pH > listaVinho[posicaoMaior].pH)
                    posicaoMaior = i;
                
                else if(listaVinho[i].pH == listaVinho[posicaoMaior].pH){
                    if(listaVinho[i].id > listaVinho[posicaoMaior].id) 
                        posicaoMaior = i;  
                }
            }

            // Invertemos o elemento com maior pH com o elemento fixado
            lista_swapVinhos(listaVinho, posicaoMaior, posicaoElementoAtual);
        }
    }

    // Ordenando pelo alcohol
    if(strcmp(caracteristica, "alcohol") == 0){
        int posicaoMaior = 0;

        // Percorrendo o Vetor para encontrar o elemento com o maior alcohol
        for(i = 0; i < quantidadeElementos; ++i){
            if(listaVinho[i].alcohol > listaVinho[posicaoMaior].alcohol) 
                posicaoMaior = i;
            // Caso onde o alcohol de ambos os elementos sao iguais
            else if(listaVinho[i].alcohol == listaVinho[posicaoMaior].alcohol)
                if(listaVinho[i].id > listaVinho[posicaoMaior].id) 
                    posicaoMaior = i;  
        }
        
        lista_swapVinhos(listaVinho, posicaoMaior, quantidadeElementos-1); // Invertendo o elemento com maior alcohol com o ultimo elemento
        
        // Primeiro for deixa fixado o ultimo elemento nao ordenado
        for(int posicaoElementoAtual = quantidadeElementos-2; posicaoElementoAtual > 0; --posicaoElementoAtual){
            posicaoMaior = posicaoElementoAtual;

            // Segundo for encontra entre os elementos anteriores ao elemento fixado o elemento com maior alcohol
            for(i = 0; i < posicaoElementoAtual; ++i){
                if(listaVinho[i].alcohol > listaVinho[posicaoMaior].alcohol)
                    posicaoMaior = i;
                
                else if(listaVinho[i].alcohol == listaVinho[posicaoMaior].alcohol){
                    if(listaVinho[i].id > listaVinho[posicaoMaior].id) 
                        posicaoMaior = i;  
                }
            }

            // Invertemos o elemento com maior alcohol com o elemento fixado
            lista_swapVinhos(listaVinho, posicaoMaior, posicaoElementoAtual);
        }
    }

    // Ordenando pelo id
    if(strcmp(caracteristica, "id") == 0){
        int posicaoMaior = 0;

        // Percorrendo o Vetor para encontrar o elemento com o maior id
        for(i = 0; i < quantidadeElementos; ++i)
            if(listaVinho[i].id > listaVinho[posicaoMaior].id) 
                posicaoMaior = i;  
        
        
        lista_swapVinhos(listaVinho, posicaoMaior, quantidadeElementos-1); // Invertendo o elemento com maior id com o ultimo elemento
        
        // Primeiro for deixa fixado o ultimo elemento nao ordenado
        for(int posicaoElementoAtual = quantidadeElementos-2; posicaoElementoAtual > 0; --posicaoElementoAtual){
            posicaoMaior = posicaoElementoAtual;

            // Segundo for encontra entre os elementos anteriores ao elemento fixado o elemento com maior id
            for(i = 0; i < posicaoElementoAtual; ++i)
                if(listaVinho[i].id > listaVinho[posicaoMaior].id)
                    posicaoMaior = i;
                
            // Invertemos o elemento com maior id com o elemento fixado
            lista_swapVinhos(listaVinho, posicaoMaior, posicaoElementoAtual);
        }
    }
}

void lista_swapVinhos(VINHO *listaVinho, int posicaoVinhoA, int posicaoVinhoB){
    // Invertendo dois vinhos do vetor lista 
    VINHO vinhoAux = listaVinho[posicaoVinhoA];
    listaVinho[posicaoVinhoA] = listaVinho[posicaoVinhoB];
    listaVinho[posicaoVinhoB] = vinhoAux;
}