//
//  main.c
//  ExercicioFuncaoContinuacao
//
//  Created by Mirelle Sine on 16/05/23.
//

#include <stdio.h>

float calcularDesconto(float valorTotal) {
    return valorTotal * 0.9;  // Aplica 10% de desconto
}

float calcularParcelas(float valorTotal, int numParcelas, float taxaJuros) {
    return valorTotal / numParcelas * (1 + taxaJuros);  // Calcula o valor das parcelas com juros
}

void imprimirOpcoesPagamento() {
    printf("Opções de pagamento:\n");
    printf("1) À vista com 10%% de desconto\n");
    printf("2) Em duas vezes (preço da etiqueta)\n");
    printf("3) De 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00)\n");
}

int lerOpcaoPagamento() {
    int opcao;

    printf("Digite a opção de pagamento desejada: ");
    scanf("%d", &opcao);

    return opcao;
}

int main() {
    float valorTotal;
    int opcaoPagamento;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valorTotal);

    imprimirOpcoesPagamento();
    opcaoPagamento = lerOpcaoPagamento();

    switch (opcaoPagamento) {
        case 1:
            valorTotal = calcularDesconto(valorTotal);
            printf("Valor total com desconto: R$ %.2f\n", valorTotal);
            break;
        case 2:
            printf("Valor total das duas parcelas: R$ %.2f\n", valorTotal / 2);
            break;
        case 3:
            if (valorTotal > 100.0) {
                int numParcelas;
                float taxaJuros;

                printf("Digite o número de parcelas desejado (3 a 10): ");
                scanf("%d", &numParcelas);

                printf("Digite a taxa de juros ao mês (em porcentagem): ");
                scanf("%f", &taxaJuros);
                taxaJuros /= 100;  // Converte a taxa de juros para decimal

                float valorParcelas = calcularParcelas(valorTotal, numParcelas, taxaJuros);
                printf("Valor total das parcelas: R$ %.2f\n", valorParcelas);
            } else {
                printf("Opção inválida. A compra deve ser acima de R$ 100,00 para parcelamento.\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
