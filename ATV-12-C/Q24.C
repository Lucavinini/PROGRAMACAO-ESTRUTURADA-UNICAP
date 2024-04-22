#include <stdio.h>
#include <string.h>

int encontrarCaractere(const char *string, char caractere, int posicaoInicial) {
    int i;
    int tamanho = strlen(string);

    for (i = posicaoInicial; i < tamanho; i++) {
        if (string[i] == caractere) {
            return i;
        }
    }

    return -1;
}

int main() {
    char string[100];
    char caractere;
    int posicaoInicial;
    int posicaoEncontrada;

    printf("Digite uma string: ");
    scanf("%s", string);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    printf("Digite a posição inicial para busca: ");
    scanf("%d", &posicaoInicial);

    posicaoEncontrada = encontrarCaractere(string, caractere, posicaoInicial);

    if (posicaoEncontrada != -1) {
        printf("Posição do caractere '%c' encontrada: %d\n", caractere, posicaoEncontrada);
    } else {
        printf("Caractere '%c' não encontrado a partir da posição %d\n", caractere, posicaoInicial);
    }

    return 0;
}
