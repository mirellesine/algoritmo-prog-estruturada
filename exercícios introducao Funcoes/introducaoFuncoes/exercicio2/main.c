//
//  main.c
//  exercicio2
//
//  Created by Mirelle Sine on 06/05/23.
//

#include <stdio.h>

float calculaMedia(float nota1, float nota2, float nota3) {
    float media = (nota1 + nota2 + nota3) / 3.0;
    return media;
}

int main() {
    int numEstudantes;
    printf("Digite o número de estudantes: ");
    scanf("%d", &numEstudantes);
    for (int i = 1; i <= numEstudantes; i++) {
        float nota1, nota2, nota3;
        printf("\nEstudante %d:\n", i);
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);
        float media = calculaMedia(nota1, nota2, nota3);
        printf("Média do estudante %d: %.2f\n", i, media);
    }
    return 0;
}
