//
//  2.c
//  ListaAvaliativa3pts
//
//  Created by Mirelle Sine on 07/06/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// estrutura para armazenar dados de uma dieta
typedef struct Dieta {
    char comida[50];
    float pesoPorcao;
    int calorias;
    struct Dieta* proximo;
} Dieta;

// funcao para solicitar os dados de uma dieta
void solicitarDadosDieta(Dieta* dieta) {
    printf("Comida: ");
    scanf(" %[^\n]s", dieta->comida);

    printf("Peso da porcao: ");
    scanf("%f", &(dieta->pesoPorcao));

    printf("Numero de calorias: ");
    scanf("%d", &(dieta->calorias));
}

// funcao para listar todas as dietas cadastradas
void listarDietas(Dieta* lista) {
    if (lista == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    printf("=== Dietas ===\n");
    Dieta* atual = lista;
    while (atual != NULL) {
        printf("\n");
        printf("Comida: %s\n", atual->comida);
        printf("Peso da porcao: %.2f\n", atual->pesoPorcao);
        printf("Numero de calorias: %d\n", atual->calorias);

        atual = atual->proximo;
    }
}

int main(int argc, const char * argv[]) {
    Dieta* lista = NULL;  // inicializa a lista vazia
    int opcao;

    do {
        printf("\n=== Menu ===\n");
        printf("1. Adicionar dieta\n");
        printf("2. Listar dietas\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                // cria uma nova dieta
                Dieta* novaDieta = (Dieta*)malloc(sizeof(Dieta));
                if (novaDieta == NULL) {
                    printf("Erro ao alocar memoria.\n");
                    return 1;
                }

                // solicita os dados da dieta
                solicitarDadosDieta(novaDieta);

                // insere a dieta no inicio da lista
                novaDieta->proximo = lista;
                lista = novaDieta;

                printf("Dieta adicionada com sucesso.\n");
                break;
            }
            case 2:
                // lista todas as dietas cadastradas
                listarDietas(lista);
                break;
            case 0:
                // encerra o programa
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }
    } while (opcao != 0);

    // libera a memoria alocada para as dietas
    Dieta* atual = lista;
    while (atual != NULL) {
        Dieta* proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }

    return 0;
}

