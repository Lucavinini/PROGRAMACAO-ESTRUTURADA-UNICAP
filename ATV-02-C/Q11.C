#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ordenar(int *num1, int *num2, int *num3) {
    if (*num1 > *num2) {
        trocar(num1, num2);
    }
    if (*num1 > *num3) {
        trocar(num1, num3);
    }
    if (*num2 > *num3) {
        trocar(num2, num3);
    }
}

int main() {
    int numero1, numero2, numero3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &numero3);

    ordenar(&numero1, &numero2, &numero3);

    printf("Numeros em ordem crescente: %d, %d, %d\n", numero1, numero2, numero3);

    return 0;
}
