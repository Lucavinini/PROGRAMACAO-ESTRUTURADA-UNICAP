#include <stdio.h>

int encontrarMaiorElemento(int vetor[], int tamanho) {
    int maior = vetor[0];
    
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    
    return maior;
}

int main() {
    int vetor[10];
    
    printf("Digite os 10 elementos do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    int maior = encontrarMaiorElemento(vetor, 10);
    
    printf("O maior elemento do vetor é: %d\n", maior);
    
    return 0;
}
