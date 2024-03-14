#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    int *ponteiro_int;
    float *ponteiro_real;
    char *ponteiro_char;

    ponteiro_int = &inteiro;
    ponteiro_real = &real;
    ponteiro_char = &caractere;

    printf("Valores originais:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);


    *ponteiro_int = 20;
    *ponteiro_real = 6.28;
    *ponteiro_char = 'B';

    printf("\nValores após modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}
