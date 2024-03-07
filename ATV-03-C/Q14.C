#include <stdio.h>

int main() {
    int numero = 1;

    while (numero <= 100) {
        if (numero % 2 != 0) {
            printf("%d ", numero);
        }
        numero++;
    }
    printf("\n");

    return 0;
}
