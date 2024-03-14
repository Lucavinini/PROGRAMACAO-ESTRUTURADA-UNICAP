#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois números inteiros:\n");
    scanf("%d %d", &num1, &num2);

    printf("Endereço de memória de num1: %p\n", (void *)&num1);
    printf("Endereço de memória de num2: %p\n", (void *)&num2);

    return 0;
}
