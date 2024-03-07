#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 3 == 0 && numero % 5 == 0) {
        printf("O numero e divisivel por 3 e por 5 ao mesmo tempo.\n");
    } else {
        printf("O numero nao e divisivel por 3 e por 5 ao mesmo tempo.\n");
    }

    return 0;
}
