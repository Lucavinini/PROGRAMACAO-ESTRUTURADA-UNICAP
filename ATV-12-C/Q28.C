#include <stdio.h>
#include <string.h>

int main() {
    char S1[21], S2[21];
    char C1, C2;
    int opcao;
    int posicao, tamanho;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Ler uma string S1 (tamanho máximo 20 caracteres)\n");
        printf("2. Imprimir o tamanho da string S1\n");
        printf("3. Comparar a string S1 com uma nova string S2\n");
        printf("4. Concatenar a string S1 com uma nova string S2 e imprimir o resultado\n");
        printf("5. Imprimir a string S1 de forma reversa\n");
        printf("6. Contar quantas vezes um dado caractere aparece na string S1\n");
        printf("7. Substituir a primeira ocorrência do caractere C1 na string S1 pelo caractere C2\n");
        printf("8. Verificar se uma string S2 é substring de S1\n");
        printf("9. Retornar uma substring da string S1\n");
        printf("0. Sair\n");

        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a string S1 (máximo 20 caracteres): ");
                scanf("%s", S1);
                break;
            case 2:
                printf("Tamanho da string S1: %lu\n", strlen(S1));
                break;
            case 3:
                printf("Digite a nova string S2: ");
                scanf("%s", S2);
                if (strcmp(S1, S2) == 0) {
                    printf("As strings S1 e S2 são iguais.\n");
                } else {
                    printf("As strings S1 e S2 são diferentes.\n");
                }
                break;
            case 4:
                printf("Digite a nova string S2 para concatenar com S1: ");
                scanf("%s", S2);
                strcat(S1, S2);
                printf("String concatenada: %s\n", S1);
                break;
            case 5:
                printf("String S1 de forma reversa: ");
                for (int i = strlen(S1) - 1; i >= 0; i--) {
                    printf("%c", S1[i]);
                }
                printf("\n");
                break;
            case 6:
                printf("Digite o caractere a ser contado na string S1: ");
                scanf(" %c", &C1);
                int contador = 0;
                for (int i = 0; i < strlen(S1); i++) {
                    if (S1[i] == C1) {
                        contador++;
                    }
                }
                printf("O caractere '%c' aparece %d vezes na string S1.\n", C1, contador);
                break;
            case 7:
                printf("Digite o caractere C1 a ser substituído: ");
                scanf(" %c", &C1);
                printf("Digite o caractere C2 de substituição: ");
                scanf(" %c", &C2);
                for (int i = 0; i < strlen(S1); i++) {
                    if (S1[i] == C1) {
                        S1[i] = C2;
                        break; 
                    }
                }
                printf("String S1 após substituição: %s\n", S1);
                break;
            case 8:
                printf("Digite a string S2 a ser verificada como substring de S1: ");
                scanf("%s", S2);
                if (strstr(S1, S2) != NULL) {
                    printf("A string S2 é uma substring de S1.\n");
                } else {
                    printf("A string S2 NÃO é uma substring de S1.\n");
                }
                break;
            case 9:
                printf("Digite a posição inicial para criar a substring: ");
                scanf("%d", &posicao);
                printf("Digite o tamanho da substring: ");
                scanf("%d", &tamanho);
                if (posicao >= 0 && posicao < strlen(S1) && tamanho > 0) {
                    printf("Substring de S1 a partir da posição %d com tamanho %d: %.*s\n", posicao, tamanho, tamanho, &S1[posicao]);
                } else {
                    printf("Posição ou tamanho inválidos para criar a substring.\n");
                }
                break;
            case 0:
                printf("Encerrando o programa...\n");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
