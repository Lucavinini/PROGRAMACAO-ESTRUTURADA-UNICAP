#include <stdio.h>

int main() {
    int primeiro, ultimo;
    int pares = 0, impares = 0;

    printf("Digite uma sequencia de numeros inteiros (digite 0 para parar):\n");
    scanf("%d", &primeiro);
    ultimo = primeiro;

    while (ultimo != 0) {
        if (ultimo % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        scanf("%d", &ultimo);
    }

    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);

    return 0;
}
