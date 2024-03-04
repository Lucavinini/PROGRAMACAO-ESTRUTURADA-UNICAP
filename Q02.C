#include <stdio.h>

int main (){
    int idade;
    char nome [10];
    printf("Digite o seu nome:\n");
    scanf("%s",&nome);
    printf("Digite a sua idade:\n");
    scanf("%i",&idade);
    printf("Sua idade e: %i\nSeu Nome e: %s",idade,nome);
}