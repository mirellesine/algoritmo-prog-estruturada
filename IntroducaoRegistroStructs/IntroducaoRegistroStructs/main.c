//
//  main.c
//  IntroducaoRegistroStructs
//
//  Created by Mirelle Sine on 16/05/23.
//

#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 100

struct Pessoa {
    char nome[MAX_NAME_LENGTH];
    int idade;
    char endereco[MAX_ADDRESS_LENGTH];
};

int main() {
    struct Pessoa pessoa;

    printf("Digite o nome: ");
    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    // Limpar o buffer do teclado antes de ler o endereço
    while (getchar() != '\n');

    printf("Digite o endereco: ");
    fgets(pessoa.endereco, sizeof(pessoa.endereco), stdin);

    printf("\nDados digitados:\n");
    printf("Nome: %s", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereco: %s", pessoa.endereco);

    return 0;
}
