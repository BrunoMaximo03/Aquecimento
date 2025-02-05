#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int conta = 0;
    printf("STRNG:\n");
    fgets(str,50,stdin);

    str[strcspn(str, "\n")] = '\0';
    printf("STRNG: %s\n",str);

    while(str[conta] != '\0') {
        if(islower(str[conta])) {               //retorna true or false
            str[conta] = toupper(str[conta]);
        }
            conta++;
    }

    printf("NOVA STRING: %s",str);

    return 0;
}
