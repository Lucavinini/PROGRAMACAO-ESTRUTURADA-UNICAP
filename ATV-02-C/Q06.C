#include <stdio.h>

int main() {
    int number1;

    scanf("%d", &number1);

    if (number1 % 2 == 0) {
        printf("Par");
    } else {
        printf("Impar");
    }

    return 0;
}
