#include <stdio.h>
#include <string.h>

int main() {
    char estado_civil[20];

    printf("Digite seu estado civil: ");
    scanf("%s", estado_civil);

    switch (estado_civil[0]) {
        case 's':
        case 'S':
            printf("Voce e solteiro(a).\n");
            break;
        case 'c':
        case 'C':
            printf("Voce e casado(a).\n");
            break;
        case 'd':
        case 'D':
            printf("Voce e divorciado(a).\n");
            break;
        case 'v':
        case 'V':
            printf("Voce e viuvo(a).\n");
            break;
        default:
            printf("Estado civil invalido.\n");
            break;
    }

    return 0;
}
