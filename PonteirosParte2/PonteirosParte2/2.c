//
//  2.c
//  PonteirosParte2
//
//  Created by Mirelle Sine on 30/05/23.
//

#include <stdio.h>

int calcularDobroESoma(int *a, int *b) {
    int soma = (*a * 2) + (*b * 2);
    *a = *a * 2;
    *b = *b * 2;
    return soma;
}

int main(int argc, const char * argv[]) {
    int valorA, valorB;
    
    printf("Digite o valor de A: ");
    scanf("%d", &valorA);
    
    printf("Digite o valor de B: ");
    scanf("%d", &valorB);
    
    int resultado = calcularDobroESoma(&valorA, &valorB);
    
    printf("O resultado da soma do dobro de A e B: %d\n", resultado);
    printf("Novo valor de A: %d\n", valorA);
    printf("Novo valor de B: %d\n", valorB);
    
    return 0;
}

