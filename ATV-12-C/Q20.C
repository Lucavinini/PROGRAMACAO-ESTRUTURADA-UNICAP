#include <stdio.h>
#include <string.h>

#define NUM_CARROS 5

int main() {
    char modelos[NUM_CARROS][50];
    float consumos[NUM_CARROS];
    int i;
    char modeloMaisEconomico[50];
    float consumoMaisEconomico;
    float litrosPara1000Km;


    for (i = 0; i < NUM_CARROS; i++) {
        printf("Digite o modelo do carro %d: ", i + 1);
        scanf("%s", modelos[i]);

        printf("Digite o consumo em km/l do carro %d: ", i + 1);
        scanf("%f", &consumos[i]);
    }

    consumoMaisEconomico = consumos[0];
    strcpy(modeloMaisEconomico, modelos[0]);

    for (i = 1; i < NUM_CARROS; i++) {
        if (consumos[i] > 0 && consumos[i] < consumoMaisEconomico) {
            consumoMaisEconomico = consumos[i];
            strcpy(modeloMaisEconomico, modelos[i]);
        }
    }

    
    printf("\nCarro mais econômico: %s\n", modeloMaisEconomico);
    printf("Consumo do carro mais econômico: %.2f km/l\n", consumoMaisEconomico);

    litrosPara1000Km = 1000 / consumoMaisEconomico;
    printf("Litros necessários para percorrer 1000 km com o carro mais econômico: %.2f litros\n", litrosPara1000Km);

    return 0;
}
