#include <stdio.h>

int main() {
    int numero = 1;

    while (numero <= 50) {
        if (numero % 3 == 0) {
            printf("%d ", numero);
        }
        numero++;
    }
    printf("\n");

    return 0;
}
