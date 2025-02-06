#include <stdio.h>
#include <string.h>

int main() {

    char str[50];
    int conta = 0;
    printf("STRING ->:\n");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")] = '\0';

    char* strSemCaractere;
    strSemCaractere = (char*)malloc((strlen(str) + 1)*sizeof(char)); //adicionando + 1 para colocar o \0 na nova string

    int indiceNovastr = 0; //para percorrer a nova sting
    while(str[conta] != '\0') {
        if(str[conta] != 'a') {
            strSemCaractere[indiceNovastr] = str[conta];
            indiceNovastr++;
        }
        conta++;
    }

    printf("String pos remocao -> %s",strSemCaractere);

    free(strSemCaractere);

    return 0;
}
