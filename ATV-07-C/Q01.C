#include <stdio.h>

int main() {
    int vetor[10];
    int i, maior;

    printf("Digite 10 números inteiros:\n");

    
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    
    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

  
    printf("O maior elemento do vetor é: %d\n", maior);

    return 0;
}
