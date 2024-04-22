#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    int comprimento;

    printf("Digite um nome: ");
    scanf("%s", nome);

    comprimento = strlen(nome);

    printf("O nome digitado tem %d letras.\n", comprimento);

    return 0;
}
