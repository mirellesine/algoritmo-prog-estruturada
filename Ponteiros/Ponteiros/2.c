//
//  2.c
//  Ponteiros
//
//  Created by Mirelle Sine on 16/05/23.
//

#include <stdio.h>

int main() {
    int var1;
    int var2;

    printf("Endereço de var1: %p\n", &var1);
    printf("Endereço de var2: %p\n", &var2);

    if (&var1 > &var2) {
        printf("O endereço de var1 é maior.\n");
    } else if (&var2 > &var1) {
        printf("O endereço de var2 é maior.\n");
    } else {
        printf("Os endereços são iguais.\n");
    }

    return 0;
}
