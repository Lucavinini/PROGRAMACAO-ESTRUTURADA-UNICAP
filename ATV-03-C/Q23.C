#include <stdio.h>
#include <limits.h>

int main() {
    int numero;
    int menor_positivo_impar = INT_MAX;

    printf("Digite uma sequencia de numeros inteiros (digite 0 para parar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero > 0 && numero % 2 != 0 && numero < menor_positivo_impar) {
            menor_positivo_impar = numero;
        }
    }

    if (menor_positivo_impar != INT_MAX) {
        printf("Menor valor positivo impar digitado: %d\n", menor_positivo_impar);
    } else {
        printf("Nenhum valor positivo impar foi digitado.\n");
    }

    return 0;
}
