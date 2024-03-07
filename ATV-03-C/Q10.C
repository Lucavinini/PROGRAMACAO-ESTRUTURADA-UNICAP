#include <stdio.h>

int main() {
    int multiplicador = 1;

    while (multiplicador <= 10) {
        printf("9 x %d = %d\n", multiplicador, 9 * multiplicador);
        multiplicador++;
    }

    return 0;
}
