#include <stdio.h>
#include <string.h>

int main() {
    char cadeia[100];
    int i;

    printf("Digite uma cadeia de caracteres: ");
    scanf("%s", cadeia);

 
    for (i = 0; i < strlen(cadeia); i++) {
        if (cadeia[i] >= 'a' && cadeia[i] <= 'z') {
            cadeia[i] -= 32;
        }
    }

    printf("Cadeia em maiúsculas: %s\n", cadeia);

    return 0;
}
