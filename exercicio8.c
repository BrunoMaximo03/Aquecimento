#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int contaPalavras = 0, avanco = 0;

    printf("STRING ->: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0'; // Removendo o \n

    // Loop para contar palavras
    while (str[avanco] != '\0') {
        // Pular espaços em branco
        while (str[avanco] == ' ') {
            avanco++;
        }

        // Se encontrou um caractere que não é espaço, é uma nova palavra
        if (str[avanco] != '\0') {
            contaPalavras++;
        }

        // Avançar até o final da palavra
        while (str[avanco] != ' ' && str[avanco] != '\0') {
            avanco++;
        }
    }

    printf("TOTAL DE PALAVRAS -> %d\n", contaPalavras);

    return 0;
}
