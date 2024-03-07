#include <stdio.h>

int main() {
    int numero, maior, menor;

    printf("Digite uma sequencia de numeros inteiros (digite 0 para parar):\n");
    scanf("%d", &numero);
    maior = menor = numero;

    while (numero != 0) {
        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
        scanf("%d", &numero);
    }

    printf("Maior valor digitado: %d\n", maior);
    printf("Menor valor digitado: %d\n", menor);

    return 0;
}
