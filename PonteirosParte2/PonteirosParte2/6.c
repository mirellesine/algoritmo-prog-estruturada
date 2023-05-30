//
//  6.c
//  PonteirosParte2
//
//  Created by Mirelle Sine on 30/05/23.
//

#include <stdio.h>

void imprimirArray(int *array, int tamanho) {
    // Percorre o array usando aritmética de ponteiros
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(array + i));
    }
    
    printf("\n");
}

int main(int argc, const char * argv[]) {
    int array[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(array) / sizeof(array[0]);
    
    imprimirArray(array, tamanho);
    
    return 0;
}
