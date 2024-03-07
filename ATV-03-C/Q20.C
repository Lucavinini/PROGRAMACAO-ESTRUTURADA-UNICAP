#include <stdio.h>

int main() {
    int numero;
    int soma = 0, quantidade = 0;

    printf("Digite uma sequencia de numeros inteiros (digite 0 para parar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero % 3 == 0) {
            soma += numero;
            quantidade++;
        }
    }

    if (quantidade != 0) {
        printf("Media dos numeros divisiveis por 3: %.2f\n", (float)soma / quantidade);
    } else {
        printf("Nenhum numero divisivel por 3 foi digitado.\n");
    }

    return 0;
}
