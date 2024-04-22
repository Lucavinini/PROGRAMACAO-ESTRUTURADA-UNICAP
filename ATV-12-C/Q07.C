#include <stdio.h>
#include <string.h>

int contarUns(const char *str) {
    int contador = 0;
    int comprimento = strlen(str);

  
    for (int i = 0; i < comprimento; i++) {
       
        if (str[i] == '1') {
            contador++;
        }
    }

    return contador;
}

int main() {
    char str[100];

 
    printf("Digite uma string contendo 0s e 1s: ");
    scanf("%s", str);

    
    int numUns = contarUns(str);


    printf("O número de '1's na string é: %d\n", numUns);

    return 0;
}
