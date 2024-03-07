#include <stdio.h>
#include <string.h>

int main() {
    char dia_semana[20];

    printf("Digite o dia da semana: ");
    scanf("%s", dia_semana);

    if (strcmp(dia_semana, "sabado") == 0 || strcmp(dia_semana, "domingo") == 0) {
        printf("E fim de semana.\n");
    } else {
        printf("E um dia util.\n");
    }

    return 0;
}
