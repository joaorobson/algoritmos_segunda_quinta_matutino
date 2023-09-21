#include <stdio.h>

int main(){
    int linhaOperacao;
    char operacao;

    double matriz[12][12], soma = 0;

    scanf("%d", &linhaOperacao);
    scanf(" %c", &operacao);

    // insere os valores em cada posição da matriz
    for(int linha = 0;linha < 12;linha++){
        for(int coluna = 0;coluna < 12;coluna++){
            scanf("%lf", &matriz[linha][coluna]);
        }
    }

    // calcula a soma para a linha escolhida
    for(int coluna = 0;coluna < 12;coluna++){
        soma = soma + matriz[linhaOperacao][coluna];
    }

    // apresenta o resultado da operação
    if(operacao == 'S'){
        printf("%.1lf\n", soma);
    } else if(operacao == 'M'){
        printf("%.1lf\n", soma/12);
    }

    return 0;
}