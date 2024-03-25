#include <stdio.h>

unsigned long long int fatorial(int N) {
    if (N == 0 || N == 1) {
        return 1;
    } else {
        return N * fatorial(N - 1);
    }
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("Número inválido. Por favor, digite um número inteiro não-negativo.\n");
    } else {
        unsigned long long int resultado = fatorial(numero);
        printf("O fatorial de %d é %llu.\n", numero, resultado);
    }
    
    return 0;
}
