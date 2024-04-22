#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    char l1, l2;
    int i;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    printf("Digite a letra a ser substituída (L1): ");
    scanf(" %c", &l1);

    printf("Digite a letra substituta (L2): ");
    scanf(" %c", &l2);

 
    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == l1) {
            string[i] = l2;
        }
    }

    printf("String após substituição: %s\n", string);

    return 0;
}
