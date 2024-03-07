#include <stdio.h>

int main(){

    int number1;
    int number2;

    scanf("%d %d",&number1, &number2);

    if (number1>number2){
        printf("Primeiro número maior que o segundo");
        break;
    }
    if (number1==number2){
        printf("São iguais")
        break;
    }
    if (number1<number2){
        printf("Segundo número maior");
        break;
    }


    return 0;
}