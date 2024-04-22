#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    int idade;
    char maisJovem[50], maisVelho[50];
    int idadeMaisJovem = 999, idadeMaisVelho = -1;

    while (1) {
        printf("Digite o nome da pessoa (ou 'fim' para encerrar): ");
        scanf("%s", nome);

        if (strcmp(nome, "fim") == 0) {
            break;
        }

        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade);

        if (idade < 0) {
            break;
        }

        if (idade < idadeMaisJovem) {
            idadeMaisJovem = idade;
            strcpy(maisJovem, nome);
        }

        if (idade > idadeMaisVelho) {
            idadeMaisVelho = idade;
            strcpy(maisVelho, nome);
        }
    }

    printf("Pessoa mais jovem: %s, idade: %d\n", maisJovem, idadeMaisJovem);
    printf("Pessoa mais velha: %s, idade: %d\n", maisVelho, idadeMaisVelho);

    return 0;
}
