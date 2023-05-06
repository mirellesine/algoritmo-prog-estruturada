#include <stdio.h>

int main() {
    int n, i;
    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &n);
    printf("Os primeiros %d números naturais ímpares são:\n", n);
    for (i = 1; n > 0; i += 2) {
        printf("%d\n", i);
        n--;
    }
    return 0;
}
