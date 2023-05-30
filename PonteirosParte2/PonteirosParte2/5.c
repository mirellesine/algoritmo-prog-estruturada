//
//  5.c
//  PonteirosParte2
//
//  Created by Mirelle Sine on 30/05/23.
//

#include <stdio.h>

int main() {
    int array[5];
    
    printf("Digite 5 números inteiros:\n");
    
    // Leitura dos valores do array usando aritmética de ponteiros
    for (int i = 0; i < 5; i++) {
        scanf("%d", array + i);
    }
    
    printf("O dobro de cada valor lido:\n");
    
    // Impressão do dobro de cada valor usando aritmética de ponteiros
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(array + i) * 2);
    }
    
    return 0;
}
