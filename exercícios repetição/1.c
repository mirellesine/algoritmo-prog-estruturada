#include <stdio.h>

int main() {
    int n, i;
    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &n);
    printf("Números naturais de 0 até %d em ordem crescente:\n", n);
    for (i = 0; i <= n; i++) {
        printf("%d\n", i);
    }
    return 0;
}
