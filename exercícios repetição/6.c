#include <stdio.h>

int main() {
    int opcao, quantidade;
    float total = 0.0;
    printf("Bem-vindo à loja de frutas!\n");
    do {
        printf("\nEscolha a fruta desejada:\n");
        printf("1 - Abacaxi (R$ 5,00 a unidade)\n");
        printf("2 - Maçã (R$ 1,00 a unidade)\n");
        printf("3 - Pera (R$ 4,00 a unidade)\n");
        printf("0 - Finalizar compra\n");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("Digite a quantidade desejada: ");
                scanf("%d", &quantidade);
                total += quantidade * 5.0;
                printf("Abacaxi - Quantidade: %d - Total: R$ %.2f\n", quantidade, total);
                break;
            case 2:
                printf("Digite a quantidade desejada: ");
                scanf("%d", &quantidade);
                total += quantidade * 1.0;
                printf("Maçã - Quantidade: %d - Total: R$ %.2f\n", quantidade, total);
                break;
            case 3:
                printf("Digite a quantidade desejada: ");
                scanf("%d", &quantidade);
                total += quantidade * 4.0;
                printf("Pera - Quantidade: %d - Total: R$ %.2f\n", quantidade, total);
                break;
            case 0:
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);
    printf("\nValor total da compra: R$ %.2f\n", total);
    printf("Obrigado pela preferência!\n");
    return 0;
}
