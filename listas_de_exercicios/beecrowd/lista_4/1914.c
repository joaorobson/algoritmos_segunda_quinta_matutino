#include <stdio.h>
#include <string.h>

char* parOuImpar(int valor){
    if(valor%2 == 0){
        return "PAR";
    } else {
        return "IMPAR";
    }
}

void checaGanhador(char* nome1, 
                   char* nome2,
                   char* escolha1, 
                   char* resultadoParOuImpar){
    // se resultado igual a escolha da primeira pessoa,
    // primeira pessoa ganha
    if(strcmp(resultadoParOuImpar, escolha1) == 0){
        printf("%s\n", nome1);
    } else {
        printf("%s\n", nome2);
    }
}

int main(){
    int numEntradas;
    char nome1[101], nome2[101], escolha1[6], escolha2[6];
    char resultado[6];
    int valor1, valor2;
    scanf("%d", &numEntradas);

    for(int i = 0;i < numEntradas;i++){
        scanf("%s", nome1);
        scanf("%s", escolha1);
        scanf("%s", nome2);
        scanf("%s", escolha2);
        scanf("%d", &valor1);
        scanf("%d", &valor2);
        strcpy(resultado, parOuImpar(valor1 + valor2)); //"PAR" ou "IMPAR"
        checaGanhador(nome1, nome2, escolha1, resultado);
    }

    return 0;
}