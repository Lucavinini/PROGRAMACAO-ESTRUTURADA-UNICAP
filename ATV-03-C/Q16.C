#include <stdio.h>

int main() {
    float nota;
    int alunos_aprovados = 0;
    int contador = 0;

    while (contador < 5) {
        printf("Digite a nota do aluno %d: ", contador + 1);
        scanf("%f", &nota);

        if (nota >= 7.0) {
            alunos_aprovados++;
        }

        contador++;
    }

    printf("Quantidade de alunos aprovados: %d\n", alunos_aprovados);

    return 0;
}
