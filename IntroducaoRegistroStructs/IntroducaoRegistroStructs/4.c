//
//  4.c
//  IntroducaoRegistroStructs
//
//  Created by Mirelle Sine on 16/05/23.
//

#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 10
#define PASSING_GRADE 5.0

struct Aluno {
    char nome[MAX_NAME_LENGTH];
    int matricula;
    float mediaFinal;
};

int main() {
    struct Aluno alunos[MAX_STUDENTS];
    struct Aluno aprovados[MAX_STUDENTS];
    struct Aluno reprovados[MAX_STUDENTS];
    int i, j = 0, k = 0;

    printf("Digite as informações dos alunos:\n");

    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("\nAluno %d:\n", i + 1);

        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Média Final: ");
        scanf("%f", &alunos[i].mediaFinal);

        while (getchar() != '\n');

        if (alunos[i].mediaFinal >= PASSING_GRADE) {
            aprovados[j] = alunos[i];
            j++;
        } else {
            reprovados[k] = alunos[i];
            k++;
        }
    }

    printf("\nAlunos Aprovados:\n");

    for (i = 0; i < j; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s", aprovados[i].nome);
        printf("Matrícula: %d\n", aprovados[i].matricula);
        printf("Média Final: %.2f\n", aprovados[i].mediaFinal);
    }

    printf("\nAlunos Reprovados:\n");

    for (i = 0; i < k; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s", reprovados[i].nome);
        printf("Matrícula: %d\n", reprovados[i].matricula);
        printf("Média Final: %.2f\n", reprovados[i].mediaFinal);
    }

    return 0;
}
