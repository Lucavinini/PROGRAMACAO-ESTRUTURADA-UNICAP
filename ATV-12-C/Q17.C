#include <stdio.h>
#include <string.h>

int main() {
    char vetor[100];
    int i, j;

    printf("Digite uma frase: ");
    fgets(vetor, sizeof(vetor), stdin);

    for (i = 0, j = 0; vetor[i] != '\0'; i++) {
        if (vetor[i] != ' ') {
            vetor[j++] = vetor[i];
        }
    }
    vetor[j] = '\0'; 
    printf("Vetor resultante sem espaços em branco: %s\n", vetor);

    return 0;
}
