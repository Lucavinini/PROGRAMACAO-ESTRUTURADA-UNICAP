#include <stdio.h>

int main(){
    printf("Digite a sua idade:  ");
    int idade;
    scanf("%i", &idade);

    if (idade >= 18){
        printf("Maior de idade");
    }
    else{
        printf("Menor de idade");
    }

    return 0;
}
