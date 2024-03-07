#include <stdio.h>

int main() {
    printf("Digite um numero inteiro: ");
    int number;
    scanf("%i", &number);

    if (number > 10) {
        printf("Maior que 10");
    }

    if (number < 10) {
        printf("Menor que 10");
    }

    if (number == 10) {
        printf("Igual a 10");
    }

    return 0;
}
