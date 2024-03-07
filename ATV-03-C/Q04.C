#include <stdio.h>

int main() {
    float altura, soma_alturas = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%f", &altura);

        soma_alturas += altura;
    }

    printf("Media de altura das 5 pessoas: %.2f\n", soma_alturas / 5.0);

    return 0;
}
