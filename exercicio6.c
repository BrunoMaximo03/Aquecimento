#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int inicio, fim;
    char aux;

    printf("STRING ->: ");
    fgets(str, sizeof(str), stdin);

    // Remover o '\n' da string
    str[strcspn(str, "\n")] = '\0';

    char stringPos[strlen(str) + 1];
    strcpy(stringPos,str);

    // Definir índices para inverter a string
    inicio = 0;
    fim = strlen(str) - 1;

    // Inverter a string usando troca de caracteres
    while (inicio < fim) {
        aux = str[inicio];
        str[inicio] = str[fim];
        str[fim] = aux;

        // Avançar os índices
        inicio++;
        fim--;
    }

    printf("STRING INVERTIDA -> %s\n", str);

    if(strcmp(str,stringPos) == 0 ) {
        printf("Eh palindromo");
    } else {
        printf("Nao eh palindromo");
    }
    return 0;
}
