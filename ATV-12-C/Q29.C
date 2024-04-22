#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int extrairData(char *data, int *dia, int *mes, int *ano) {
   
    if (strlen(data) != 10 || data[2] != '/' || data[5] != '/') {
        printf("Formato de data inválido. Use o formato \"DD/MM/AAAA\".\n");
        return 0;
    }

    
    *dia = atoi(data);
    *mes = atoi(data + 3);
    *ano = atoi(data + 6);

    
    if (*dia < 1 || *dia > 31 || *mes < 1 || *mes > 12 || *ano < 0) {
        printf("Valores inválidos para dia, mês ou ano.\n");
        return 0;
    }

    return 1;
}

int main() {
    char data[12];
    int dia, mes, ano;

    printf("Digite uma data no formato \"DD/MM/AAAA\": ");
    fgets(data, sizeof(data), stdin);

    
    if (data[strlen(data) - 1] == '\n') {
        data[strlen(data) - 1] = '\0';
    }

    if (!extrairData(data, &dia, &mes, &ano)) {
        return 1;
    }

    printf("Dia: %d, Mês: %d, Ano: %d\n", dia, mes, ano);

    return 0;
}
