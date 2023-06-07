//
//  main.c
//  StructsComAlcacaoDinamica
//
//  Created by Mirelle Sine on 07/06/23.
//int argc, const char * argv[]
//Definir registros para criação de um cadastro de Anamnese (hospitalar, por exemplo).
//
//Alocar dinamicamente espaço para criação de novos registros.
//
//Armazenar os registros em uma lista ou vetor.
//
//Imprimir os registros de Anamnese cadastrados.


#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
    char genero[20];
    float altura;
    float peso;
} Anamnese;

int main(int argc, const char * argv[]) {
    int quantidadeRegistros;
    printf("Digite a quantidade de registros de Anamnese a serem cadastrados: ");
    scanf("%d", &quantidadeRegistros);

    // Aloca espaço para o vetor de registros
    Anamnese* registros = (Anamnese*)malloc(quantidadeRegistros * sizeof(Anamnese));
    if (registros == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    // Preenche os registros de anamnese
    for (int i = 0; i < quantidadeRegistros; i++) {
        printf("\n=== Cadastro de Anamnese %d ===\n", i + 1);

        printf("Nome: ");
        scanf("%s", registros[i].nome);

        printf("Idade: ");
        scanf("%d", &registros[i].idade);

        printf("Genero: ");
        scanf("%s", registros[i].genero);

        printf("Altura: ");
        scanf("%f", &registros[i].altura);

        printf("Peso: ");
        scanf("%f", &registros[i].peso);
    }

    // Imprime os registros de anamnese cadastrados
    printf("\n=== Registros de Anamnese ===\n");
    for (int i = 0; i < quantidadeRegistros; i++) {
        printf("\n=== Registro %d ===\n", i + 1);
        printf("Nome: %s\n", registros[i].nome);
        printf("Idade: %d\n", registros[i].idade);
        printf("Genero: %s\n", registros[i].genero);
        printf("Altura: %.2f\n", registros[i].altura);
        printf("Peso: %.2f\n", registros[i].peso);
    }

    // Libera a memória alocada
    free(registros);

    return 0;
}
