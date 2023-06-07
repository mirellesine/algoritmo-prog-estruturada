//
//  3.c
//  ListaAvaliativa3pts
//
//  Created by Mirelle Sine on 07/06/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// definicao da estrutura Veiculo para armazenar os dados de um veiculo
typedef struct Veiculo {
    char proprietario[50];
    char combustivel[20];
    char modelo[50];
    char cor[20];
    char chassi[50];
    int ano;
    char placa[8];
    struct Veiculo* proximo;
} Veiculo;

// funcao para adicionar um veiculo na lista encadeada
Veiculo* adicionarVeiculo(Veiculo* lista) {
    Veiculo* novoVeiculo = (Veiculo*)malloc(sizeof(Veiculo));
    if (novoVeiculo == NULL) {
        printf("Erro ao alocar memoria.\n");
        return lista;
    }

    // solicita ao usuario os dados do veiculo
    printf("Proprietario: ");
    scanf(" %[^\n]s", novoVeiculo->proprietario);

    printf("Combustivel: ");
    scanf(" %[^\n]s", novoVeiculo->combustivel);

    printf("Modelo: ");
    scanf(" %[^\n]s", novoVeiculo->modelo);

    printf("Cor: ");
    scanf(" %[^\n]s", novoVeiculo->cor);

    printf("Numero do chassi: ");
    scanf(" %[^\n]s", novoVeiculo->chassi);

    printf("Ano: ");
    scanf("%d", &(novoVeiculo->ano));

    printf("Placa: ");
    scanf(" %[^\n]s", novoVeiculo->placa);

    // insere o novo veiculo no inicio da lista
    novoVeiculo->proximo = lista;
    return novoVeiculo;
}

// funcao para listar todos os proprietarios de carros a diesel do ano 2010 ou posterior
void listarProprietariosAnoDiesel(Veiculo* lista) {
    printf("\n=== Proprietarios de carros a diesel ano 2010 ou posterior ===\n");

    Veiculo* atual = lista;
    while (atual != NULL) {
        if (strcmp(atual->combustivel, "diesel") == 0 && atual->ano >= 2010) {
            printf("%s\n", atual->proprietario);
        }
        atual = atual->proximo;
    }
}

// funcao para listar todas as placas que começam com J e terminam com 0, 2, 4 ou 7
void listarPlacasJ0_2_4_7(Veiculo* lista) {
    printf("\n=== Placas que comecam com J e terminam com 0, 2, 4 ou 7 ===\n");

    Veiculo* atual = lista;
    while (atual != NULL) {
        if (atual->placa[0] == 'J' && (atual->placa[7] == '0' || atual->placa[7] == '2' || atual->placa[7] == '4' || atual->placa[7] == '7')) {
            printf("Placa: %s\n", atual->placa);
            printf("Proprietario: %s\n", atual->proprietario);
            printf("\n");
        }
        atual = atual->proximo;
    }
}

// funcao para listar o modelo e a cor dos veiculos com placas que possuem a segunda letra vogal e cuja soma dos valores numericos eh par
void listarModeloCorPlacasVogalSomaPar(Veiculo* lista) {
    printf("\n=== Modelos e cores de carros com placas que possuem segunda letra vogal e soma dos valores numericos par ===\n");

    Veiculo* atual = lista;
    while (atual != NULL) {
        char segundaLetra = atual->placa[1];
        int somaValoresNumericos = (atual->placa[2] - '0') + (atual->placa[3] - '0') + (atual->placa[4] - '0') + (atual->placa[5] - '0');

        if ((segundaLetra == 'A' || segundaLetra == 'E' || segundaLetra == 'I' || segundaLetra == 'O' || segundaLetra == 'U')
            && (somaValoresNumericos % 2 == 0)) {
            printf("Modelo: %s\n", atual->modelo);
            printf("Cor: %s\n", atual->cor);
            printf("\n");
        }
        atual = atual->proximo;
    }
}

// funcao para trocar o proprietario de um veiculo com base no número do chassi
void trocarProprietarioPorChassi(Veiculo* lista, const char* chassi) {
    Veiculo* atual = lista;
    while (atual != NULL) {
        int possuiZero = 0;
        for (int i = 0; i < 7; i++) {
            if (atual->placa[i] == '0') {
                possuiZero = 1;
                break;
            }
        }

        if (!possuiZero && strcmp(atual->chassi, chassi) == 0) {
            printf("Informe o novo proprietario: ");
            scanf(" %[^\n]s", atual->proprietario);
            printf("Proprietario alterado com sucesso.\n");
            return;
        }
        atual = atual->proximo;
    }

    printf("Nenhum veiculo encontrado com o chassi informado ou com placa que possua zero.\n");
}

// funcao para liberar a memoria alocada para a lista encadeada de veiculos
void liberarLista(Veiculo* lista) {
    Veiculo* atual = lista;
    while (atual != NULL) {
        Veiculo* proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
}


int main(int argc, const char * argv[]) {
    Veiculo* lista = NULL;
    int opcao;
    char chassi[50];

    do {
        printf("\n=== Menu ===\n");
        printf("1. Adicionar veiculo\n");
        printf("2. Listar proprietarios de carros a diesel ano 2010 ou posterior\n");
        printf("3. Listar placas que comecam com J e terminam com 0, 2, 4 ou 7\n");
        printf("4. Listar modelo e cor de carros com placas que possuem segunda letra vogal e soma dos valores numericos par\n");
        printf("5. Trocar proprietario por chassi\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                lista = adicionarVeiculo(lista);
                printf("Veiculo adicionado com sucesso.\n");
                break;
            case 2:
                listarProprietariosAnoDiesel(lista);
                break;
            case 3:
                listarPlacasJ0_2_4_7(lista);
                break;
            case 4:
                listarModeloCorPlacasVogalSomaPar(lista);
                break;
            case 5:
                printf("Informe o numero do chassi: ");
                scanf(" %[^\n]s", chassi);
                trocarProprietarioPorChassi(lista, chassi);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }
    } while (opcao != 0);

    liberarLista(lista);

    return 0;
}

