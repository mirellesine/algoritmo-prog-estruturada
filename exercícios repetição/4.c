#include <stdio.h>

int main() {
    int n = 1, count = 0;
    printf("Os cinco primeiros múltiplos de 3 maiores que 0 são:\n");
    while (count < 5) {
        if (n % 3 == 0) {
            printf("%d\n", n);
            count++;
        }
        n++;
    }
    return 0;
}
