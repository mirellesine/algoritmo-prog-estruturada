//
//  main.c
//  TrabalhoFinal4pts
//
//  Created by Mirelle Sine on 07/06/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// estrutura para armazenar as informacoes de um produto
typedef struct Produto {
    int codigo;
    char descricao[90];
    int quantidade;
    float valor;
    struct Produto* proximo;
} Produto;

// funcao para inicializar uma lista vazia de produtos
Produto* inicializarLista(void) {
    return NULL;
}

// funcao para adicionar um novo produto a lista de estoque
Produto* adicionarProduto(Produto* lista) {
    Produto* novoProduto = (Produto*)malloc(sizeof(Produto));
    if (novoProduto == NULL) {
        printf("Erro ao alocar memoria.\n");
        return lista;
    }

    printf("Codigo: ");
    scanf("%d", &(novoProduto->codigo));

    printf("Descricao: ");
    scanf(" %[^\n]s", novoProduto->descricao);

    printf("Quantidade: ");
    scanf("%d", &(novoProduto->quantidade));

    printf("Valor: ");
    scanf("%f", &(novoProduto->valor));

    novoProduto->proximo = lista;
    return novoProduto;
}

// funcao para imprimir um relatorio com as informacoes de todos os produtos
void imprimirRelatorio(Produto* lista) {
    printf("\n=== Relatorio de Produtos ===\n");

    Produto* atual = lista;
    while (atual != NULL) {
        printf("Codigo: %d\n", atual->codigo);
        printf("Descricao: %s\n", atual->descricao);
        printf("Quantidade: %d\n", atual->quantidade);
        printf("Valor: R$ %.2f\n", atual->valor);
        printf("\n");

        atual = atual->proximo;
    }
}

// funcao para pesquisar um produto pelo codigo
void pesquisarProduto(Produto* lista, int codigo) {
    Produto* atual = lista;
    while (atual != NULL) {
        if (atual->codigo == codigo) {
            printf("Produto encontrado:\n");
            printf("Codigo: %d\n", atual->codigo);
            printf("Descricao: %s\n", atual->descricao);
            printf("Quantidade: %d\n", atual->quantidade);
            printf("Valor: R$ %.2f\n", atual->valor);
            return;
        }
        atual = atual->proximo;
    }

    printf("Produto nao encontrado.\n");
}

// funcao para remover um produto do estoque pelo codigo
Produto* removerProduto(Produto* lista, int codigo) {
    Produto* atual = lista;
    Produto* anterior = NULL;

    while (atual != NULL) {
        if (atual->codigo == codigo) {
            if (anterior == NULL) {
                lista = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }

            free(atual);
            printf("Produto removido com sucesso.\n");
            return lista;
        }

        anterior = atual;
        atual = atual->proximo;
    }

    printf("Produto nao encontrado.\n");
    return lista;
}

// funcao para liberar a memoria alocada para a lista de produtos
void liberarLista(Produto* lista) {
    Produto* atual = lista;
    while (atual != NULL) {
        Produto* proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
}

// funcao principal
int main(int argc, const char * argv[]) {
    Produto* estoque = inicializarLista();
    int opcao;
    int codigo;

    do {
        printf("\n=== Controle de Estoque ===\n");
        printf("1. Cadastrar produto\n");
        printf("2. Consultar produtos\n");
        printf("3. Gerar relatorio de produtos\n");
        printf("4. Remover produto do estoque\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                estoque = adicionarProduto(estoque);
                printf("Produto cadastrado com sucesso.\n");
                break;
            case 2:
                printf("Informe o codigo do produto: ");
                scanf("%d", &codigo);
                pesquisarProduto(estoque, codigo);
                break;
            case 3:
                imprimirRelatorio(estoque);
                break;
            case 4:
                printf("Informe o codigo do produto a ser removido: ");
                scanf("%d", &codigo);
                estoque = removerProduto(estoque, codigo);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }
    } while (opcao != 0);

    liberarLista(estoque);

    return 0;
}
