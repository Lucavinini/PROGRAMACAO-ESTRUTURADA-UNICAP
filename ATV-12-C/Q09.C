#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    char nome[100];

  
    printf("Digite um nome: ");
    scanf("%s", nome);


    char primeiraLetra = tolower(nome[0]);

  
    if (primeiraLetra == 'a') {
        
        printf("Nome: %s\n", nome);
    }

    return 0;
}
