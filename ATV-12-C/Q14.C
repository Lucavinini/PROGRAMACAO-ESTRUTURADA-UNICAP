#include <stdio.h>
#include <string.h>

int main() {
    char palavra[51];
    int i;

    printf("Digite uma palavra (máximo de 50 letras): ");
    scanf("%s", palavra);

    for (i = 0; i < strlen(palavra); i++) {
        palavra[i] += 1;
    }

    printf("Palavra após somar 1 no valor ASCII de cada caractere: %s\n", palavra);

    return 0;
}
