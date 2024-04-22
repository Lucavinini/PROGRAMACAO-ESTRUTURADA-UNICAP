#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[1000];
    int count = 0;
    int i;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (i = 0; frase[i] != '\0'; i++) {
        if (isspace(frase[i])) {
            count++;
        }
    }

    printf("Número de caracteres em branco na frase: %d\n", count);

    return 0;
}
