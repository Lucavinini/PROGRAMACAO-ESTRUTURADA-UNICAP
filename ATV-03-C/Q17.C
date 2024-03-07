#include <stdio.h>

int main() {
    int numero;
    int pares = 0;

    printf("Digite uma sequencia de numeros inteiros (digite 0 para parar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero % 2 == 0) {
            pares++;
        } else {
            break;
        }
    }

    printf("Quantidade de numeros pares antes do primeiro numero impar: %d\n", pares);

    return 0;
}
