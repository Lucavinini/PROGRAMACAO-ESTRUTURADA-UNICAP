#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[50], palavra2[50];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    if (strcmp(palavra1, palavra2) < 0) {
        printf("%s vem antes de %s na ordem alfabética.\n", palavra1, palavra2);
    } else if (strcmp(palavra1, palavra2) > 0) {
        printf("%s vem antes de %s na ordem alfabética.\n", palavra2, palavra1);
    } else {
        printf("%s e %s são iguais.\n", palavra1, palavra2);
    }

    return 0;
}
