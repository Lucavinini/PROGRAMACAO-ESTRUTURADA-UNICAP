#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    char sexo;
    int idade;

  
    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (sexo == 'F' && idade < 25) {
        printf("%s ACEITA\n", nome);
    } else {
        printf("%s NAO ACEITA\n", nome);
    }

    return 0;
}
