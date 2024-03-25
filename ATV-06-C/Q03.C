#include <stdio.h>

int encontrarMaiorElemento(int vetor[], int tamanho) {
    int maior = vetor[0];
    int posicao = 0;
    
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }
    
    return posicao;
}

int main() {
    int vetor[10];
    
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    int posicao_maior = encontrarMaiorElemento(vetor, 10);
    
    printf("O maior elemento do vetor está na posição: %d\n", posicao_maior);
    
    return 0;
}
