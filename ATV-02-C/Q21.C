#include <stdio.h>

int main() {
    int operacao, num1, num2;

    printf("Escolha a operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    scanf("%d", &operacao);

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    switch (operacao) {
        case 1:
            printf("Resultado da soma: %d\n", num1 + num2);
            break;
        case 2:
            printf("Resultado da subtracao: %d\n", num1 - num2);
            break;
        case 3:
            printf("Resultado da multiplicacao: %d\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Resultado da divisao: %.2f\n", (float)num1 / num2);
            } else {
                printf("Nao e possivel dividir por zero.\n");
            }
            break;
        default:
            printf("Operacao invalida.\n");
            break;
    }

    return 0;
}
