//
//  main.c
//  Ponteiros
//
//  Created by Mirelle Sine on 16/05/23.
//

#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    int *ptrInteiro = &inteiro;
    float *ptrReal = &real;
    char *ptrChar = &caractere;

    printf("Valores antes da modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", caractere);

    *ptrInteiro = 20;
    *ptrReal = 2.71;
    *ptrChar = 'B';

    printf("\nValores após a modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", caractere);

    return 0;
}
