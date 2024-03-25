#include <stdio.h>

int encontrarMenorElemento(int vetor[], int tamanho) {
    int menor = vetor[0];
    
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    
    return menor;
}

int main() {
    int vetor[10];
    
    printf("Digite os 10 elementos do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    int menor = encontrarMenorElemento(vetor, 10);
    
    printf("O menor elemento do vetor é: %d\n", menor);
    
    return 0;
}
