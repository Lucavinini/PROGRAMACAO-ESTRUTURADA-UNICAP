#include <stdio.h>

int soma_dobro(int a, int b) {
    int dobroA = a * 2;
    int dobroB = b * 2;
    return dobroA + dobroB;
}

int main() {
    int num1, num2;

    printf("Digite dois números inteiros:\n");
    scanf("%d %d", &num1, &num2);

    int resultado = soma_dobro(num1, num2);

    printf("A soma do dobro dos números lidos é: %d\n", resultado);

    return 0;
}
