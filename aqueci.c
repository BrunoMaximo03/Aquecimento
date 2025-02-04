#include <stdio.h>
#include <string.h>
#include <ctype.h>  // Para usar isupper()
#include <stdlib.h>  // Para usar malloc e free

int main() {

    char vetor[100];
    printf("Digite a string:\n ");
    fgets(vetor,sizeof(vetor),stdin);

    vetor[strcspn(vetor, "\n")] = '\0';
    int contagem = 0;
    while(vetor[contagem] != '\0') {
        contagem++;
    }

    printf("A string tem %d caracteres\n",contagem);


    return 0;
}
