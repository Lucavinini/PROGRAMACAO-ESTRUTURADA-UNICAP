#include <stdio.h>

int main() {
    int soma = 0, i = 1;

    while (i <= 100) {
        soma += i;
        i++;
    }

    printf("Soma dos numeros de 1 a 100: %d\n", soma);

    return 0;
}
