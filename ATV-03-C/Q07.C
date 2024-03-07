#include <stdio.h>

int main() {
    int numero, numero_invertido = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        numero_invertido = numero_invertido * 10 + numero % 10;
        numero /= 10;
    }

    printf("Numero invertido: %d\n", numero_invertido);

    return 0;
}
