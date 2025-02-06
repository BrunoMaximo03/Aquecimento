#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cytpe.h>


     int main() {

        char str[50];
        printf("STRING ->:\n");
        fgets(str,sizeof(str),stdin);

        str[strcspn(str,"\n")] = '\0';   //encontra e remove o /n
        
        int inicio = 0;
        int final = strlen(str) - 1;
        char aux;

        while(inicio < fim) {
            if(str[inicio] == ' ') {    //pula espaços em branco no inicio e ja deixa o INICIO com a "contagem certa"
                inicio++;
            }   
            while(str[inicio] == ' ') { //pula espaços em branco no final e ja deixa o FINAL com a "contagem certa"
                final--;
            }
        }
            if(inicio < final) {      //inverte os caracteres
                aux = str[inicio];
                str[inicio] = str[final];
                str[final] = aux;
                inicio++;
                final--;
        }

        return 0;
     }
