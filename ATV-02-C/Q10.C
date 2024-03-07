#include <stdio.h>

int main(){

    int peso;
    int altura;

    scanf("%d", &peso);
    scanf("%d", &altura);

    if (peso == 25){
        printf("Abaixo do peso");
    }
    if (peso >= 34){

        printf("Peso normal");
    }
    if (peso >=56){
        printf("Acima do peso");
    }

 return 0;
}