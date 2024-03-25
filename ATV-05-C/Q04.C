#include <stdio.h>

void imprimirDecrescente(int N) {
    if (N < 0)
        return;
    
    printf("%d ", N);
    
    imprimirDecrescente(N - 1);
}

int main() {
    int numero;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("Número inválido. Por favor, digite um número inteiro positivo.\n");
    } else {
        printf("Os números naturais de 0 até %d em ordem decrescente são:\n", numero);
        imprimirDecrescente(numero);
        printf("\n");
    }
    
    return 0;
}
