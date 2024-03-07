#include <stdio.h>

int main() {
    int numero;
    int divisivel_por_2 = 0, divisivel_por_3 = 0, divisivel_por_5 = 0;

    printf("Digite uma sequencia de numeros inteiros (digite 0 para parar):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero % 2 == 0) {
            divisivel_por_2++;
        }

        if (numero % 3 == 0) {
            divisivel_por_3++;
        }

        if (numero % 5 == 0) {
            divisivel_por_5++;
        }
    }

    printf("Quantidade de numeros divisiveis por 2: %d\n", divisivel_por_2);
    printf("Quantidade de numeros divisiveis por 3: %d\n", divisivel_por_3);
    printf("Quantidade de numeros divisiveis por 5: %d\n", divisivel_por_5);

    return 0;
}
