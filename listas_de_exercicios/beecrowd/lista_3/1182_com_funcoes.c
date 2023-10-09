#include <stdio.h>

float calculaSomaColuna(float matriz[][12], int colunaOperacao){
    float soma = 0;

    for(int linha = 0;linha < 12;linha++){
        soma += matriz[linha][colunaOperacao];
    }
    return soma;
}

int main(){
    int colunaOperacao;
    char operacao;
    float matriz[12][12];

    scanf("%d", &colunaOperacao);
    scanf(" %c", &operacao);

    // lê valores e preenche matriz
    for(int linha = 0;linha < 12;linha++){
        for(int coluna = 0;coluna < 12;coluna++){
            scanf("%f", &matriz[linha][coluna]);
        }
    }

    float soma = calculaSomaColuna(matriz, colunaOperacao);

    if(operacao == 'S'){
        printf("%.1f\n", soma);
    } else if(operacao == 'M'){
        printf("%.1f\n", soma/12);
    }


    return 0;
}