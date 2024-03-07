#include <stdio.h>

int main() {
    int numero;
    int mais_de_tres_digitos = 0;

    printf("Digite uma sequencia de numeros inteiros (digite 0 para parar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero > 999) {
            mais_de_tres_digitos++;
        }
    }

    printf("Quantidade de numeros com mais de tres digitos: %d\n", mais_de_tres_digitos);

    return 0;
}
