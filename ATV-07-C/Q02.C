#include <stdio.h>

int main() {
    int vetor[10];
    int i, menor;

    printf("Digite 10 números inteiros:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    menor = vetor[0];

    for (i = 1; i < 10; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("O menor elemento do vetor é: %d\n", menor);

    return 0;
}
