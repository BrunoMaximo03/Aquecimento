#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int i, j = 0;

    printf("STRING ->: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    printf("STRING COM ESPAÇO EM BRANCO -> %s\n", str);

    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    printf("STRING SEM ESPAÇO -> %s\n", str);

    return 0;
}
