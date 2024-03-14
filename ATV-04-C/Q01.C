#include <stdio.h>

int main() {
    char c = 'a';
    char *pc = &c;

    printf("Endereço de c: %p\n", (void *)&c);
    printf("Valor que pc armazena: %c\n", *pc);
    printf("Endereço de pc: %p\n", (void *)&pc);

    return 0;
}
