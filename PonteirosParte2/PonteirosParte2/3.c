//
//  3.c
//  PonteirosParte2
//
//  Created by Mirelle Sine on 30/05/23.
//

#include <stdio.h>

void calcularSoma(int *a, int b) {
    *a = *a + b;
}

int main(int argc, const char * argv[]) {
    int valorA, valorB;
    
    printf("Digite o valor de A: ");
    scanf("%d", &valorA);
    
    printf("Digite o valor de B: ");
    scanf("%d", &valorB);
    
    calcularSoma(&valorA, valorB);
    
    printf("Novo valor de A: %d\n", valorA);
    printf("Valor de B: %d\n", valorB);
    
    return 0;
}
