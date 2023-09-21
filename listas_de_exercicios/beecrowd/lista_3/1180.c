#include <stdio.h>

int main(){
    int tamanhoVetor, valor, menorValor, posicaoMenorValor;
    scanf("%d", &tamanhoVetor);

    int vetor[tamanhoVetor];

    for(int posicao = 0;posicao < tamanhoVetor;posicao++){
        scanf("%d", &valor);
        vetor[posicao] = valor;
    }

    menorValor = vetor[0];
    posicaoMenorValor = 0;
    // 1 2 3 4 -5 6 7 8 9 10
    for(int posicao = 1;posicao < tamanhoVetor;posicao++){
        if(vetor[posicao] < menorValor){
            menorValor = vetor[posicao];
            posicaoMenorValor = posicao;
        }
    }

    printf("Menor valor: %d\n", menorValor);
    printf("Posicao: %d\n", posicaoMenorValor);

    return 0;
}