//
//  2.c
//  ExercicioFuncaoContinuacao
//
//  Created by Mirelle Sine on 16/05/23.
//

#include <stdio.h>

void imprimirTabelaASCII() {
    printf("Tabela ASCII:\n");
    printf("Código   Hex   Caractere\n");

    for (int codigo = 0; codigo <= 127; codigo++) {
        printf("%-9d%-6x%c\n", codigo, codigo, codigo);
    }
}

int main() {
    imprimirTabelaASCII();

    return 0;
}
