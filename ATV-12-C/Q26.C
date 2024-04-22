#include <stdio.h>
#include <string.h>

void codificarCesar(char *string, int deslocamento) {
    int i;

    for (i = 0; i < strlen(string); i++) {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            
            string[i] = 'A' + (string[i] - 'A' + deslocamento) % 26;
        } else if (string[i] >= 'a' && string[i] <= 'z') {
           
            string[i] = 'a' + (string[i] - 'a' + deslocamento) % 26;
        }
    }
}

int main() {
    char string[100];

    printf("Digite uma string para codificar usando o código de César (deslocamento de 3 posições): ");
    scanf("%s", string);

    codificarCesar(string, 3);

    printf("String codificada: %s\n", string);

    return 0;
}
