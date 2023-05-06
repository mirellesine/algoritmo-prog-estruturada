#include <stdio.h>

int main() {
    int n, i;
    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &n);
    printf("Números naturais de %d até 0 em ordem decrescente:\n", n);
    for (i = n; i >= 0; i--) {
        printf("%d\n", i);
    }
    return 0;
}
