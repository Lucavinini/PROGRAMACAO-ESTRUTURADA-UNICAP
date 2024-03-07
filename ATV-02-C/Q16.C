#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro de 1 a 5: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
            printf("Muito insuficiente\n");
            break;
        case 2:
            printf("Insuficiente\n");
            break;
        case 3:
            printf("Regular\n");
            break;
        case 4:
            printf("Bom\n");
            break;
        case 5:
            printf("Muito bom\n");
            break;
        default:
            printf("Numero invalido\n");
            break;
    }

    return 0;
}
