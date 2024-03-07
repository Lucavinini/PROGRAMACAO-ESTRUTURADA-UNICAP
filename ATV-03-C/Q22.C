#include <stdio.h>

int main() {
    int numero;
    int quantidade = 0;
    float soma = 0;

    printf("Digite uma sequencia de numeros inteiros (digite 0 para parar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero >= 50 && numero <= 100) {
            soma += numero;
            quantidade++;
        }
    }

    if (quantidade != 0) {
        printf("Media dos numeros entre 50 e 100: %.2f\n", soma / quantidade);
    } else {
        printf("Nenhum numero entre 50 e 100 foi digitado.\n");
    }

    return 0;
}
