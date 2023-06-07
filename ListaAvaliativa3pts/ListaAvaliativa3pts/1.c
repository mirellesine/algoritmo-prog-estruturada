//
//  main.c
//  ListaAvaliativa3pts
//
//  Created by Mirelle Sine on 07/06/23.
//int argc, const char * argv[]

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// estrutura para descrever restaurantes
typedef struct Restaurante {
    char nome[50];
    char endereco[100];
    float precoMedio;
    char tipoComida[50];
    struct Restaurante* proximo; //proximo elemento
} Restaurante;

// funcao para solicitar os dados de um elemento da lista
void solicitarDadosRestaurante(Restaurante* restaurante) {
    printf("Nome do restaurante: ");
    scanf(" %[^\n]s", restaurante->nome);

    printf("Endereco: ");
    scanf(" %[^\n]s", restaurante->endereco);

    printf("Preco medio: ");
    scanf("%f", &(restaurante->precoMedio));

    printf("Tipo de comida: ");
    scanf(" %[^\n]s", restaurante->tipoComida);
}

// Função para listar todos os dados da lista
void listarRestaurantes(Restaurante* lista) {
    if (lista == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    printf("=== Restaurantes ===\n");
    Restaurante* atual = lista;
    while (atual != NULL) {
        printf("\n");
        printf("Nome: %s\n", atual->nome);
        printf("Endereco: %s\n", atual->endereco);
        printf("Preco medio: %.2f\n", atual->precoMedio);
        printf("Tipo de comida: %s\n", atual->tipoComida);

        atual = atual->proximo;
    }
}

int main(int argc, const char * argv[]) {
    Restaurante* lista = NULL;  // Inicializa a lista vazia
    int opcao;

    do {
        printf("\n=== Menu ===\n");
        printf("1. Adicionar restaurante\n");
        printf("2. Listar restaurantes\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                // cria um novo restaurante
                Restaurante* novoRestaurante = (Restaurante*)malloc(sizeof(Restaurante));
                if (novoRestaurante == NULL) {
                    printf("Erro ao alocar memoria.\n");
                    return 1;
                }

                // solicita os dados do restaurante
                solicitarDadosRestaurante(novoRestaurante);

                // insere o restaurante no início da lista
                novoRestaurante->proximo = lista;
                lista = novoRestaurante;

                printf("Restaurante adicionado com sucesso.\n");
                break;
            }
            case 2:
                // lista todos os restaurantes cadastrados
                listarRestaurantes(lista);
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

    // libera a memória alocada para os restaurantes
    Restaurante* atual = lista;
    while (atual != NULL) {
        Restaurante* proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }

    return 0;
}
