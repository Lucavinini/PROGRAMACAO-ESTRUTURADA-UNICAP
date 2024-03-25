#include <stdio.h>

int main() {
    int vetor[5];
    int maior, menor, posicao_maior = 0, posicao_menor = 0;
    
    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i+1);
        scanf("%d", &vetor[i]);
        
        
        if (i == 0) {
            maior = vetor[i];
            menor = vetor[i];
        }
        
      
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao_maior = i;
        }
        
       
        if (vetor[i] < menor) {
            menor = vetor[i];
            posicao_menor = i;
        }
    }
    
    printf("O maior valor (%d) está na posição %d.\n", maior, posicao_maior);
    printf("O menor valor (%d) está na posição %d.\n", menor, posicao_menor);
    
    return 0;
}
