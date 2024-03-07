#include <stdio.h>

int main() {
    int numero, soma_digitos_pares = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        int digito = numero % 10;
        if (digito % 2 == 0) {
            soma_digitos_pares += digito;
        }
        numero /= 10;
    }

    printf("Soma dos digitos pares: %d\n", soma_digitos_pares);

    return 0;
}
