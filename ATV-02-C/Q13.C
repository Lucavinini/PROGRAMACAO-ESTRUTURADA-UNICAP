#include <stdio.h>

int main() {
    float salario, aumento;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    if (salario > 1500.00) {
        aumento = salario * 0.10;
    } else {
        aumento = salario * 0.15;
    }

    printf("O valor do aumento e: %.2f\n", aumento);

    return 0;
}
