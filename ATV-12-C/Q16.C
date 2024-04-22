#include <stdio.h>
#include <string.h>

int main() {
    char cadeia[100];
    int i;

    printf("Digite uma cadeia de caracteres em letras maiúsculas: ");
    scanf("%s", cadeia);

   
    for (i = 0; i < strlen(cadeia); i++) {
        if (cadeia[i] >= 'A' && cadeia[i] <= 'Z') {
            cadeia[i] += 32;
        }
    }

    printf("Cadeia em minúsculas: %s\n", cadeia);

    return 0;
}
