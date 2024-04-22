#include <stdio.h>
#include <string.h>

int verificarFinal(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len2 > len1) {
        return 0;
    }

    return (strcmp(&str1[len1 - len2], str2) == 0);
}

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    if (verificarFinal(str1, str2)) {
        printf("A segunda string está contida no final da primeira string.\n");
    } else {
        printf("A segunda string NÃO está contida no final da primeira string.\n");
    }

    return 0;
}
