#include <stdio.h>
#include <string.h>

int main() {
    char nomeMercadoria[50];
    float valorTotal, desconto, valorAVista;

    printf("Digite o nome da mercadoria: ");
    scanf("%s", nomeMercadoria);

    printf("Digite o valor total da mercadoria: ");
    scanf("%f", &valorTotal);

 
    desconto = 0.1 * valorTotal;
    valorAVista = valorTotal - desconto;

    printf("Nome da mercadoria: %s\n", nomeMercadoria);
    printf("Valor total: R$ %.2f\n", valorTotal);
    printf("Desconto (10%%): R$ %.2f\n", desconto);
    printf("Valor a ser pago à vista: R$ %.2f\n", valorAVista);

    return 0;
}
