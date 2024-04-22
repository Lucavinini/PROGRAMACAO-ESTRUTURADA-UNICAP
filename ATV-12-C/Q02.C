#include <stdio.h>

int calcularComprimentoString(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    if (string[0] != '\0' && string[strlen(string) - 1] == '\n') {
        string[strlen(string) - 1] = '\0';
    }

    int comprimento = calcularComprimentoString(string);

    printf("O comprimento da string digitada é: %d\n", comprimento);

    return 0;
}