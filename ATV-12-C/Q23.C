#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i, j;

    printf("Digite uma string de inteiros não-negativos: ");
    scanf("%s", string);

    printf("Digite os índices S e J (separados por espaço): ");
    scanf("%d %d", &i, &j);

    printf("Segmento S[%d..%d]: ", i, j);

    for (int k = i; k <= j; k++) {
        printf("%c", string[k]);
    }
    printf("\n");

    return 0;
}
