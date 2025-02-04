#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char nome[10];
    fflush(stdin);
    fgets(nome,10,stdin);

    printf("%s",nome);

}