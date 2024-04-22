#include <stdio.h>
#include <string.h>

void substituirCaractere(char *str, char antigo, char novo) {
    int comprimento = strlen(str);

   
    for (int i = 0; i < comprimento; i++) {
        
        if (str[i] == antigo) {
            str[i] = novo;
        }
    }
}

int main() {
    char str[100];
    char caractereAntigo, caractereNovo;

  
    printf("Digite uma string: ");
    scanf("%s", str);

  
    printf("Digite o caractere a ser substituído: ");
    scanf(" %c", &caractereAntigo);

    printf("Digite o novo caractere: ");
    scanf(" %c", &caractereNovo);

   
    substituirCaractere(str, caractereAntigo, caractereNovo);


    printf("String modificada: %s\n", str);

    return 0;
}
