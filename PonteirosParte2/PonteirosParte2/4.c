//
//  4.c
//  PonteirosParte2
//
//  Created by Mirelle Sine on 30/05/23.
//Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posçao desse array.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float array[10];
    
    printf("Endereços das posições do array:\n");
        for (int i = 0; i < 10; i++) {
            printf("Posição %d: %p\n", i, &array[i]);
        }
        
    return 0;
}

