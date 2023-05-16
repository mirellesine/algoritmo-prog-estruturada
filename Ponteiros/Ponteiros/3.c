//
//  3.c
//  Ponteiros
//
//  Created by Mirelle Sine on 16/05/23.
//

#include <stdio.h>

int main() {
    int var1;
    int var2;

    printf("Digite o valor de var1: ");
    scanf("%d", &var1);

    printf("Digite o valor de var2: ");
    scanf("%d", &var2);

    printf("Endereço de var1: %p\n", &var1);
    printf("Endereço de var2: %p\n", &var2);

    if (&var1 > &var2) {
        printf("Conteúdo de var1: %d\n", var1);
    } else if (&var2 > &var1) {
        printf("Conteúdo de var2: %d\n", var2);
    } else {
        printf("Os endereços são iguais.\n");
    }

    return 0;
}
