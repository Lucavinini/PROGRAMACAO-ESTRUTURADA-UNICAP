#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;

    printf("Digite uma sequencia de numeros inteiros (digite -1 para parar):\n");
    scanf("%d", &numero);

    while (numero != -1) {
        soma += numero;
        contador++;
        scanf("%d", &numero);
    }

    if (contador != 0) {
        printf("Media dos numeros digitados: %.2f\n", (float)soma / contador);
    } else {
        printf("Nenhum numero digitado.\n");
    }

    return 0;
}
