#include <stdio.h>
#include <string.h>

int main() {
    char vetor[100];
    int tamanho, inicio = 0, fim;
    char aux;1

    printf("STRING: \n");
    fgets(vetor, sizeof(vetor), stdin);

    
    vetor[strcspn(vetor, "\n")] = '\0';

    tamanho = strlen(vetor);
    fim = tamanho - 1;

    
    while (inicio < fim) {
        aux = vetor[inicio];
        vetor[inicio] = vetor[fim];
        vetor[fim] = aux;
        inicio++;
        fim--;
    }

    printf("String invertida: %s\n", vetor);
    printf("OI galera");
    printf("Oi bom?");

    return 0;
}
