#include <stdio.h>

int main() {
    int produto = 1, i = 1;

    while (i <= 5) {
        produto *= i;
        i++;
    }

    printf("Produto dos numeros de 1 a 5: %d\n", produto);

    return 0;
}
