#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    char caractere;
    int numVogais = 0;
    int i;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Digite um caractere (vogal ou consoante): ");
    scanf(" %c", &caractere);

    for (i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == 'a' || palavra[i] == 'A' || 
            palavra[i] == 'e' || palavra[i] == 'E' || 
            palavra[i] == 'i' || palavra[i] == 'I' || 
            palavra[i] == 'o' || palavra[i] == 'O' || 
            palavra[i] == 'u' || palavra[i] == 'U') {
            numVogais++;
            palavra[i] = caractere;
        }
    }

    printf("Quantidade de vogais na palavra: %d\n", numVogais);
    printf("Palavra modificada: %s\n", palavra);

    return 0;
}
