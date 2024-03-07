#include <stdio.h>

int main() {
    int numero, soma_digitos = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        soma_digitos += numero % 10;
        numero /= 10;
    }

    printf("A soma dos digitos do numero: %d\n", soma_digitos);

    return 0;
}
