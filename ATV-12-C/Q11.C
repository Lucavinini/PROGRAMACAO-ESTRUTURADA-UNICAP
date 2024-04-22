#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j = 0;

    printf("Digite uma string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'A' && 
            str[i] != 'e' && str[i] != 'E' && 
            str[i] != 'i' && str[i] != 'I' && 
            str[i] != 'o' && str[i] != 'O' && 
            str[i] != 'u' && str[i] != 'U') {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    printf("String sem vogais: %s\n", str);

    return 0;
}
