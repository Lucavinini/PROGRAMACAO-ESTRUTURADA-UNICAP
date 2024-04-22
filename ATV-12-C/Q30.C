#include <stdio.h>
#include <string.h>

#define NUM_ALUNOS 5
#define TAM_NOME 50

int main() {
    char alunos[NUM_ALUNOS][TAM_NOME];
    char nomeBusca[TAM_NOME];
    int i = 0;
    int encontrado = 0;

    while (i < NUM_ALUNOS) {
        printf("Digite o nome do aluno %d (ou digite 'fim' para encerrar): ", i + 1);
        scanf("%s", alunos[i]);

        if (strcmp(alunos[i], "fim") == 0) {
            break;
        }

        i++;
    }

    printf("\nLista de alunos:\n");
    for (int j = 0; j < i; j++) {
        printf("%d. %s\n", j + 1, alunos[j]);
    }

    printf("\nDigite o nome (ou parte do nome) a ser buscado na lista: ");
    scanf("%s", nomeBusca);

    for (int j = 0; j < i; j++) {
        if (strstr(alunos[j], nomeBusca) != NULL) {
            printf("Nome encontrado: %s (Posição: %d)\n", alunos[j], j + 1);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Nome não encontrado na lista.\n");
    }

    return 0;
}
