#include <stdio.h>

int main() {
    float nota;
    int alunos_aprovados = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);

        if (nota >= 7.0) {
            alunos_aprovados++;
        }
    }

    printf("Quantidade de alunos aprovados: %d\n", alunos_aprovados);

    return 0;
}
