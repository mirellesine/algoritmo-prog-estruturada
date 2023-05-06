#include <stdio.h>

int main() {
    int n, i;
    long int fib, fib_ant1 = 1, fib_ant2 = 0;
    printf("Digite um número inteiro maior ou igual a zero: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("O termo 0 da sequência de Fibonacci é 0\n");
    } else if (n == 1) {
        printf("O termo 1 da sequência de Fibonacci é 1\n");
    } else {
        for (i = 2; i <= n; i++) {
            fib = fib_ant1 + fib_ant2;
            fib_ant2 = fib_ant1;
            fib_ant1 = fib;
        }
        printf("O termo %d da sequência de Fibonacci é %ld\n", n, fib);
    }
    return 0;
}
