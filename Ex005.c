/* Construa uma estrutura aluno com nome, numero de matrıcula e curso. Leia do usuario a informacao de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela. */

#include <stdio.h>
#include <string.h>
#define qtd 5

typedef struct
{
    char curso[20];
    char nome[20];
    int matricula;
} TAluno;

int main(void) 
{
    TAluno turma[qtd];

    for(int i = 0; i < qtd; i++)
    {
        printf("Aluno numero: %d\n", i + 1);


        printf("Digite o seu nome: \n");
        fgets(turma[i].nome, sizeof(turma[i].nome), stdin);
        turma[i].nome[strcspn(turma[i].nome, "\n")] = '\0';

  
        printf("Digite o seu curso: \n");
        fgets(turma[i].curso, sizeof(turma[i].curso), stdin);
        turma[i].curso[strcspn(turma[i].curso, "\n")] = '\0';


        printf("Digite a sua matricula: \n");
        scanf("%d", &turma[i].matricula);
        getchar();
    }


    for(int i = 0; i < qtd; i++)
    {
        printf("Dados do aluno %d:\n", i + 1);
        printf("Nome: %s\n", turma[i].nome);
        printf("Curso: %s\n", turma[i].curso);
        printf("Matrícula: %d\n", turma[i].matricula);
        printf("\n");
    }

    return 0;
}
