//
//  2.c
//  IntroducaoRegistroStructs
//
//  Created by Mirelle Sine on 16/05/23.
//

#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define MAX_COURSE_LENGTH 50
#define MAX_STUDENTS 5

struct Aluno {
    char nome[MAX_NAME_LENGTH];
    int matricula;
    char curso[MAX_COURSE_LENGTH];
};

int main() {
    struct Aluno alunos[MAX_STUDENTS];

    printf("Digite as informações dos alunos:\n");

    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("\nAluno %d:\n", i + 1);

        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Número de Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        while (getchar() != '\n');

        printf("Curso: ");
        fgets(alunos[i].curso, sizeof(alunos[i].curso), stdin);
    }

    printf("\nDados dos alunos:\n");

    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s", alunos[i].nome);
        printf("Número de Matrícula: %d\n", alunos[i].matricula);
        printf("Curso: %s", alunos[i].curso);
    }

    return 0;
}
