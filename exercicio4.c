#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int conta = 0, vogais = 0, consoantes = 0;
    
    printf("STRNG:\n");
    fgets(str,50,stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("STRING DIGITADA: %s\n",str);
    
    while(str[conta] != '\0') {
        if(str[conta] == 'a' || str[conta] == 'e' || str[conta] == 'i' || str[conta] == 'o' || str[conta] == 'u') {
            vogais++;
        } else {
            consoantes++;
        }
        conta++;
    }

    printf("VOGAIS: %d\n",vogais);
    printf("CONSOANTES: %d\n",consoantes);
    
    return 0;
}