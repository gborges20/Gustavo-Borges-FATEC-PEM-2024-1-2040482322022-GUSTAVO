#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 50

struct FichaAluno
{
    char nomeAluno[50];
    float notaF;
};


void bubbleSort(struct FichaAluno alunos[], int n) {
    int i, j;
    struct FichaAluno temp;

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(strcmp(alunos[j].nomeAluno, alunos[j + 1].nomeAluno) > 0) {
                temp = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    int acao = 0;
    char name[50];
    float notaInserida;
    int i = 0;
    int contador;

    struct FichaAluno alunos[MAX_ALUNOS]; 

    while(acao != 3) {
        printf("\nInsira a operação que deseja:\n");
        printf("Cadastrar aluno: 1\n");
        printf("Listar alunos: 2\n");
        printf("Sair: 3\n");

        scanf("%i", &acao);

        switch(acao) {
            case 0:
                printf("\nInsira uma opção válida\n\n");
                break;

            case 1:
                printf("\nInsira o nome do aluno:\n");
                scanf("%s", name);
                strcpy(alunos[i].nomeAluno, name);

                printf("Insira a nota do aluno:\n");
                scanf("%f", &notaInserida);
                alunos[i].notaF = notaInserida;

                i++;
                break;

            case 2:
                printf("Lista de alunos cadastrados no sistema:\n");

                bubbleSort(alunos, i); 

                for(contador = 0; contador < i; contador++) {
                    printf("\nNome: %s\n", alunos[contador].nomeAluno);
                    printf("Nota: %.2f\n", alunos[contador].notaF);

                    if(alunos[contador].notaF >= 6) {
                        printf("Aprovado!\n\n");
                    } else if(alunos[contador].notaF > 10) {
                        printf("Valor inválido!\n\n");
                    } else {
                        printf("Reprovado!\n\n");
                    }
                }
                break;
        }
    }

    return 0;
}
