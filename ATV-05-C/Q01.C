#include <stdio.h>

int somaAteN(int N) {
    if (N == 0) {
        return 0;
    } else {
        return N + somaAteN(N - 1);
    }
}

int main() {
    int numero;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("Número inválido. Por favor, digite um número inteiro positivo.\n");
    } else {
        int soma = somaAteN(numero);
        printf("A soma dos números de 1 até %d é %d.\n", numero, soma);
    }
    
    return 0;
}
