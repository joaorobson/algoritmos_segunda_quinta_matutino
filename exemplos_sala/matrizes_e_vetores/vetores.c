#include <stdio.h>

int main(){
    int valores[5];
    
    // Em regra, não acessamos posições negativas ou além do tamanho
    // máximo do vetor declarado.
    printf("Acessando posicao -1: %d\n", valores[-1]);
    printf("Acessando posicao 10: %d\n", valores[10]);

    printf("Insira 5 valores:\n");
    // outras formas de fazer a inicialização: 
    // int valores[5] = {10, 20, 30, 40, 50}; OU
    // int valores[5];
    // valores[0] = 10;
    // valores[1] = 20;
    // valores[2] = 30;
    // valores[3] = 40;
    // valores[4] = 50; OU
    for(int i = 0;i <= 4;i++){
        printf("Valor na posicao %d: ", i);
        scanf("%d", &valores[i]);
    }

    for(int i = 0;i <= 4;i++){
        printf("Valor na posicao %d: %d\n", i, valores[i]);
    }

    return 0;
}