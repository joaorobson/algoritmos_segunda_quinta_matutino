#include <stdio.h>
#include <string.h>

int main(){
/*     // primeira forma de inicializar uma string
    char string1[5] = "abcd";

    // segunda forma de inicializar uma string
    char string2[10] = {'e', 'f', 'g', '\0'};

    // terceira forma de inicializar
    char string3[30];
    // desvantagens
    // 1 - não limita o tamanho do texto lido
    // 2 - não lê o "enter" da entrada, ou seja, não
    // armazena a quebra de linha (\n) na string
    printf("Insira uma string: ");
    gets(string3);

    char string4[30];
    printf("Insira outra string: ");
    fgets(string4, 30, stdin);

    printf("Imprimindo com printf:\n");
    printf("string1 (incializada com chaves, char por char): %s\n", string1);
    printf("string2 (inicializada com aspas): %s\n", string2);
    printf("string3 (lida com gets): %s", string3);
    printf("================\n");
    printf("string4 (lida com fgets): %s", string4);
    printf("================\n");

    // outra forma de imprimir
    fputs("Imprimindo com fputs:\n", stdout);
    fputs(string4, stdout);


    // imprimir tamanho das strings
    printf("Tamanho das strings:\n");
    printf("tamanho da string1 (%s): %d\n", string1, strlen(string1));
    printf("tamanho da string2 (%s): %d\n", string2, strlen(string2));
    printf("tamanho da string3 (%s): %d\n", string3, strlen(string3));
    printf("tamanho da string4 (%s): %d\n", string4, strlen(string4));

    // copiar uma string para outra
    char string5[5];
    strcpy(string5, string1);
    printf("string5: %s\n", string5);


    // concatenar strings
    strcat(string1, string2);
    printf("string1 + string2: %s\n", string1); */


    // comparando strings
    char string6[10] = "joao";
    char string7[10] = "joana";

    if(strcmp(string6, string7) == 0){
        printf("string6 eh igual a string7\n");
    } else if(strcmp(string6, string7) < 0) {
        printf("string6 vem antes da string7 alfabeticamente\n");
    } else if(strcmp(string6, string7) > 0) {
        printf("string6 vem depois da string7 alfabeticamente\n");
    }

    return 0;
}