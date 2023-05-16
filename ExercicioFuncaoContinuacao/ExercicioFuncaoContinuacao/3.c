//
//  3.c
//  ExercicioFuncaoContinuacao
//
//  Created by Mirelle Sine on 16/05/23.
//

#include <stdio.h>

float calcularInflacao(float preco) {
    if (preco < 100.0) {
        return preco * 1.1;  // Inflação de 10%
    } else {
        return preco * 1.2;  // Inflação de 20%
    }
}

int main() {
    float precoProduto;

    printf("Digite o preço do produto: R$ ");
    scanf("%f", &precoProduto);

    float novoPreco = calcularInflacao(precoProduto);

    printf("Preço inicial: R$ %.2f\n", precoProduto);
    printf("Novo preço após a inflação: R$ %.2f\n", novoPreco);

    return 0;
}
