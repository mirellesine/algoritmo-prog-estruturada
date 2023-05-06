#include <stdio.h>

int main() {
    int n = 0, sum = 0, count = 0;
    while (count < 50) {
        if (n % 2 == 0) {
            sum += n;
            count++;
        }
        n++;
    }
    printf("A soma dos 50 primeiros números pares é: %d\n", sum);
    return 0;
}
