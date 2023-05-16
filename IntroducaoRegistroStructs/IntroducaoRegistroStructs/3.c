//
//  3.c
//  IntroducaoRegistroStructs
//
//  Created by Mirelle Sine on 16/05/23.
//

#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 5
#define PASSING_GRADE 7

struct Aluno {
    int matricula;
    char nome[MAX_NAME_LENGTH];
    float notaProva1;
    float notaProva2;
    float notaProva3;
    float media;
};

int main() {
    struct Aluno alunos[MAX_STUDENTS];
    int i;
    float maxNotaProva1 = 0;
    int indiceMaxNotaProva1 = 0;
    float maxMedia = 0;
    int indiceMaxMedia = 0;
    float minMedia = 10;
    int indiceMinMedia = 0;
    
    printf("Digite as informações dos alunos:\n");
    
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("\nAluno %d:\n", i + 1);
        
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        
        while (getchar() != '\n');
        
        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        
        printf("Nota da primeira prova: ");
        scanf("%f", &alunos[i].notaProva1);
        
        printf("Nota da segunda prova: ");
        scanf("%f", &alunos[i].notaProva2);
        
        printf("Nota da terceira prova: ");
        scanf("%f", &alunos[i].notaProva3);
        
        alunos[i].media = (alunos[i].notaProva1 + alunos[i].notaProva2 + alunos[i].notaProva3) / 3;
        
        if (alunos[i].notaProva1 > maxNotaProva1) {
            maxNotaProva1 = alunos[i].notaProva1;
            indiceMaxNotaProva1 = i;
        }
        
        if (alunos[i].media > maxMedia) {
            maxMedia = alunos[i].media;
            indiceMaxMedia = i;
        }
        
        if (alunos[i].media < minMedia) {
            minMedia = alunos[i].media;
            indiceMinMedia = i;
        }
    }
    
    printf("\nDados dos alunos:\n");
    
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Nome: %s", alunos[i].nome);
        printf("Nota da primeira prova: %.2f\n", alunos[i].notaProva1);
        printf("Nota da segunda prova: %.2f\n", alunos[i].notaProva2);
        printf("Nota da terceira prova: %.2f\n", alunos[i].notaProva3);
        printf("Média: %.2f\n", alunos[i].media);
        
        if (alunos[i].media >= PASSING_GRADE) {
            printf("Situação: Aprovado\n");
        } else {
            printf("Situação: Reprovado\n");
        }
    }
    
    printf("\nAluno com maior nota na primeira prova:\n");
    printf("Nome: %s", alunos[indiceMaxNotaProva1].nome);
    printf("Nota da primeira prova: %.2f\n", alunos[indiceMaxNotaProva1].notaProva1);
    
    printf("\nAluno com maior média geral:\n");
    printf("Nome: %s", alunos[indiceMaxMedia].nome);
    printf("Média: %.2f\n", alunos[indiceMaxMedia].media);
    printf("\nAluno com menor média geral:\n");
    printf("Nome: %s", alunos[indiceMinMedia].nome);
    printf("Média: %.2f\n", alunos[indiceMinMedia].media);
    
    return 0;
    
}
     
