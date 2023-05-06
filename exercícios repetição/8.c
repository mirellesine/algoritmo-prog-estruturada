#include <stdio.h>

int main() {
    char sexo, olhos, cabelos;
    int idade;
    float salario;
    int total_feminino = 0;
    int total_castanhos = 0;
    int total_idade = 0;
    int total_habitantes = 0;

    printf("Digite as informações dos habitantes:\n");

    do {
        printf("Sexo (m/f): ");
        scanf(" %c", &sexo);

        if (sexo == 'f') {
            printf("Cor dos olhos (a/v/c/p): ");
            scanf(" %c", &olhos);

            printf("Cor dos cabelos (l/c/p/r): ");
            scanf(" %c", &cabelos);

            printf("Idade (10-100): ");
            scanf("%d", &idade);

            printf("Salario (>=0): ");
            scanf("%f", &salario);

            if (olhos == 'c' && cabelos == 'c' && idade >= 18 && idade <= 35) {
                total_feminino++;
            }
        }

        total_habitantes++;
    } while (idade != -1);

    printf("\n--- Resultado da pesquisa ---\n");

    printf("Total de habitantes: %d\n", total_habitantes - 1);

    float porcentagem_feminino_castanhos = (float)total_feminino / (total_habitantes - 1) * 100;
    printf("Porcentagem de mulheres com olhos e cabelos castanhos e idade entre 18 e 35 anos: %.2f%%\n", porcentagem_feminino_castanhos);

    return 0;
}
