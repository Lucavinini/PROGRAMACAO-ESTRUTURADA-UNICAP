#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 1) {
        printf("Voce e um bebe.\n");
    } else if (idade > 1 && idade <= 12) {
        printf("Voce e uma crianca.\n");
    } else if (idade >= 13 && idade <= 18) {
        printf("Voce e um adolescente.\n");
    } else if (idade > 18) {
        printf("Voce e um adulto.\n");
    } else {
        printf("Idade invalida.\n");
    }

    return 0;
}
