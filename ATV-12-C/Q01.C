#include <stdio.h>

#define MAX_LENGTH 100

int main() {
    char string[MAX_LENGTH];

    printf("Digite uma string: ");
    fgets(string, MAX_LENGTH, stdin);

    printf("A string digitada foi: %s", string);

    return 0;
}
