#include <stdio.h>

int main() {
    int numero, soma_cubos_digitos = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        int digito = numero % 10;
        soma_cubos_digitos += digito * digito * digito;
        numero /= 10;
    }

    printf("Soma dos cubos dos digitos: %d\n", soma_cubos_digitos);

    return 0;
}
