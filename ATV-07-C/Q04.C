#include <stdio.h>

int main() {
    int vetor[5];
    int i, maior, menor, posicaoMaior, posicaoMenor;

    printf("Digite 5 números inteiros:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];
    posicaoMaior = 0;
    posicaoMenor = 0;

    for (i = 1; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicaoMaior = i;
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
            posicaoMenor = i;
        }
    }

    printf("A posição do maior valor é: %d\n", posicaoMaior);
    printf("A posição do menor valor é: %d\n", posicaoMenor);

    return 0;
}
