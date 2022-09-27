#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "busca.h"

//Declaracao das Funcoes
FILE *abre_arquivo(void);
int quantidade_elementos(FILE *file);
void vinho_print(VINHO *vinho);
void leitura_arquivo(FILE *file, VINHO *listaVinho);
void lista_vinhoPrint(VINHO *listaVinho, int quantidadeElementos);
void buscaElementos(VINHO *listaVinho, int quantidadeRegistros);

int main(void){
    int quantidadeRegistros;
    
    FILE *file = NULL;
    file = abre_arquivo(); //Abrindo o arquivo segundo entrada do usuario
    quantidadeRegistros = quantidade_elementos(file); //Contando quantos elementos possui o arquivo

    VINHO *listaVinho = (VINHO *) malloc(sizeof(VINHO) * (quantidadeRegistros)); // Declarando vetor de structs do tipo VIHNO
   
    leitura_arquivo(file, listaVinho);

    listaVinho_ordenar(listaVinho, "id", quantidadeRegistros);
    //lista_vinhoPrint(listaVinho, quantidadeRegistros);

    buscaElementos(listaVinho, quantidadeRegistros);
    
    fclose(file); //Fechando o arquivo
    free(listaVinho); //Desalocando memoria alocada durante a execucao do algoritmo
    return EXIT_SUCCESS;
}

FILE *abre_arquivo(void){
    FILE *file;

    char nomeArquivo[20];
    scanf("%s", nomeArquivo);
    file = fopen(nomeArquivo, "r"); 

    if(file == NULL) //Verificacao para exito em abertura de arquivo
        exit(1);
    return file;
}

int quantidade_elementos(FILE *file){
    // Funcao para retornar quantos registros o arquivo possui
    int quantidadeRegistros;
        
    if(file == NULL) //Verificao de seguranca
        return -1;

    char stringDescarte[200]; //String para descartar a primeira linha do arquivo
    fscanf(file, "%s\n", stringDescarte); //Descartando
        
    //Realizando a leitura linha a linha do arquivo para contar quantos registros ele possui
    while(!feof(file)){
        fscanf(file, "%d", &quantidadeRegistros);
        fgets(stringDescarte, 200, file);
    }
     
    //printf("Quantidade de Registros:%d\n", quantidadeRegistros);
    fseek(file, 0, SEEK_SET); //Retornado o cursor do arquivo para o inicio
    
    return quantidadeRegistros+1; //Retorno da Funcao
    // quantidadeRegistros+1 pois a contagem inicia do 0
}


void leitura_arquivo(FILE *file, VINHO *listaVinho){
    if(file == NULL || listaVinho == NULL) //Verificacao de Seguranca
        exit(1);
    
    //Lendo o arquivo e adicionado dados no listaVinho
    int i = 0; //Variavel Auxiliar
    char stringDescarte[50]; // Variavel Auxilia

    int id; //Variavel da Struct
    double citricAcid, residualSugar, density, pH, alcohol; //Variavel da Struct

    fscanf(file, "%s\n", stringDescarte); //Descartando a primeira linha do arquivo

    
    while(!feof(file)){
        fscanf(file, "%d,%lf,%lf,%lf,%lf,%lf\n", &id, &citricAcid, &residualSugar, &density, &pH, &alcohol);
        listaVinho[i].id = id;
        listaVinho[i].citricAcid = citricAcid;
        listaVinho[i].residualSugar = residualSugar;
        listaVinho[i].density = density;
        listaVinho[i].pH = pH;
        listaVinho[i].alcohol = alcohol;
        ++i;
    } 
}

void vinho_print(VINHO *vinho){
    //Imprimindo informacoes de Vinho dado
    printf("ID: %d, Citric Acid: %lf, Residual Sugar %lf, Density %lf, pH %lf, Alcohol %lf\n", 
            vinho->id, vinho->citricAcid, vinho->residualSugar, vinho->density, vinho->pH, vinho->alcohol);
}

void lista_vinhoPrint(VINHO *listaVinho, int quantidadeElementos){
    for(int i = 0; i < quantidadeElementos; ++i)
        vinho_print(&listaVinho[i]);
}

void buscaElementos(VINHO *listaVinho, int quantidadeRegistros){
    int quantidadeBuscas;
    int totalVinhoEncontrado = 0;
    int posicaoElementoBuscado = -1;
    scanf("%d", &quantidadeBuscas); // Recebendo do usuario a quantidade de buscas que serao realizadas

    // Variaveis para a busca
    char tipoBusca[50];
    int id, j;
    double caracteristica;

    // Buscando o registro segundo tipo de busca e Chave fornecida pelo usario
    for(int i = 0; i < quantidadeBuscas; ++i){
        totalVinhoEncontrado = 1;
        scanf("%s", tipoBusca);
        if(strcmp(tipoBusca, "id") == 0){
            scanf("%d", &id);
            listaVinho_ordenar(listaVinho, tipoBusca, quantidadeRegistros);
            posicaoElementoBuscado = buscaBinariaId(listaVinho, 0, quantidadeRegistros, id);

            // Contando quantos vinhos com a mesma caracteristica foram encontrados
            for(j = posicaoElementoBuscado; j < quantidadeRegistros; ++j){
                if(listaVinho[posicaoElementoBuscado].id == listaVinho[posicaoElementoBuscado + totalVinhoEncontrado].id)
                    ++totalVinhoEncontrado;
            }
        }
        else if(strcmp(tipoBusca, "citric_acid") == 0){
            scanf("%lf", &caracteristica);
            listaVinho_ordenar(listaVinho, tipoBusca, quantidadeRegistros);
            posicaoElementoBuscado = buscaBinariaCitricAcid(listaVinho, 0, quantidadeRegistros, caracteristica);

            // Contando quantos vinhos com a mesma caracteristica foram encontrados
            for(j = posicaoElementoBuscado; j < quantidadeRegistros; ++j){
                if(listaVinho[posicaoElementoBuscado].citricAcid == listaVinho[posicaoElementoBuscado+totalVinhoEncontrado].citricAcid)
                    ++totalVinhoEncontrado;
            }
            lista_vinhoPrint(listaVinho, quantidadeRegistros);
        }
        else if(strcmp(tipoBusca, "residual_sugar") == 0){
            scanf("%lf", &caracteristica);
            listaVinho_ordenar(listaVinho, tipoBusca, quantidadeRegistros);
            posicaoElementoBuscado = buscaBinariaResidualSugar(listaVinho, 0, quantidadeRegistros, caracteristica);

            // Contando quantos vinhos com a mesma caracteristica foram encontrados
            for(j = posicaoElementoBuscado; j < quantidadeRegistros; ++j){
                if(listaVinho[posicaoElementoBuscado].residualSugar == listaVinho[posicaoElementoBuscado + totalVinhoEncontrado].residualSugar)
                    ++totalVinhoEncontrado;
            }
        }
        else if(strcmp(tipoBusca, "density") == 0){
            scanf("%lf", &caracteristica);
            listaVinho_ordenar(listaVinho, tipoBusca, quantidadeRegistros);
            posicaoElementoBuscado = buscaBinariaDensity(listaVinho, 0, quantidadeRegistros, caracteristica);

            // Contando quantos vinhos com a mesma caracteristica foram encontrados
            for(j = posicaoElementoBuscado; j < quantidadeRegistros; ++j){
                if(listaVinho[posicaoElementoBuscado].density == listaVinho[posicaoElementoBuscado + totalVinhoEncontrado].density)
                    ++totalVinhoEncontrado;
            }
        }
        else if(strcmp(tipoBusca, "pH") == 0){
            scanf("%lf", &caracteristica);
            listaVinho_ordenar(listaVinho, tipoBusca, quantidadeRegistros);
            posicaoElementoBuscado = buscaBinariaPh(listaVinho, 0, quantidadeRegistros, caracteristica);

            // Contando quantos vinhos com a mesma caracteristica foram encontrados
            for(j = posicaoElementoBuscado; j < quantidadeRegistros; ++j){
                if(listaVinho[posicaoElementoBuscado].pH == listaVinho[posicaoElementoBuscado + totalVinhoEncontrado].pH)
                    ++totalVinhoEncontrado;
            }
        }
        else if(strcmp(tipoBusca, "alcohol") == 0){
            scanf("%lf", &caracteristica);
            listaVinho_ordenar(listaVinho, tipoBusca, quantidadeRegistros);
            posicaoElementoBuscado = buscaBinariaAlcohol(listaVinho, 0, quantidadeRegistros, caracteristica);

            // Contando quantos vinhos com a mesma caracteristica foram encontrados
            for(j = posicaoElementoBuscado; j < quantidadeRegistros; ++j){
                if(listaVinho[posicaoElementoBuscado].alcohol == listaVinho[posicaoElementoBuscado + totalVinhoEncontrado].alcohol)
                    ++totalVinhoEncontrado;
            }
        }
        

        if(posicaoElementoBuscado != -1){ // Imprimindo o Registro caso ele tenha sido encontrado
            vinho_print(&listaVinho[posicaoElementoBuscado]);
            printf("Total de Vinhos Encontrados: %d\n", totalVinhoEncontrado);
        }
        else    
            printf("Nenhum Vinho Encontrado\n");
    }
}

