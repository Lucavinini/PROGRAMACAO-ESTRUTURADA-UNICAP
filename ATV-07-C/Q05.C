#include <stdio.h>

int main() {
    int vetor[10];
    int i, j;
    int temIgual = 0;

    printf("Digite 10 números inteiros:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("Valores iguais encontrados: %d (posição %d) e %d (posição %d)\n", vetor[i], i, vetor[j], j);
                temIgual = 1;
            }
        }
    }

    if (!temIgual) {
        printf("Não foram encontrados valores iguais no vetor.\n");
    }

    return 0;
}
