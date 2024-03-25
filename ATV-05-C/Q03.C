#include <stdio.h>

int fibonacci(int N) {
    if (N == 0)
        return 0;
    else if (N == 1)
        return 1;
    else
        return fibonacci(N - 1) + fibonacci(N - 2);
}

int main() {
    int N;
    printf("Digite o valor de N para calcular o N-ésimo termo da sequência de Fibonacci: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Valor de N inválido. Por favor, digite um número inteiro não-negativo.\n");
    } else {
        int resultado = fibonacci(N);
        printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", N, resultado);
    }

    return 0;
}
