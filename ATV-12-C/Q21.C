#include <stdio.h>
#include <string.h>

int main() {
    char frase1[100], frase2[100];
    int i;

    printf("Digite a primeira frase: ");
    fgets(frase1, sizeof(frase1), stdin);

    printf("Digite a segunda frase: ");
    fgets(frase2, sizeof(frase2), stdin);


    printf("Frase invertida e com substituição:\n");
    for (i = strlen(frase1) - 1; i >= 0; i--) {
        if (frase1[i] == 'A' || frase1[i] == 'a') {
            printf("*");
        } else {
            printf("%c", frase1[i]);
        }
    }
    printf("\n");

    for (i = strlen(frase2) - 1; i >= 0; i--) {
        if (frase2[i] == 'A' || frase2[i] == 'a') {
            printf("*");
        } else {
            printf("%c", frase2[i]);
        }
    }
    printf("\n");

    return 0;
}
