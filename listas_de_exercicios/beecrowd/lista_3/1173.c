#include <stdio.h>

int main(){
    int valor, vetor[10];

    scanf("%d", &valor);
    vetor[0] = valor;

    // Lógica abaixo pode ser implementada com for
    /*vetor[1] = vetor[0]*2;
    vetor[2] = vetor[1]*2;
    vetor[3] = vetor[2]*2;
    ...
    vetor[9] = vetor[8]*2;*/

    for(int posicao = 1; posicao < 10;posicao++){
        vetor[posicao] = vetor[posicao - 1]*2; // Cada posição recebe posição anterior X 2
    }

    for(int posicao = 0;posicao < 10;posicao++){
        printf("N[%d] = %d\n", posicao, vetor[posicao]);
    }

    return 0;
}