#include <stdio.h>

int main(){
    int matriz[2][3];

    for(int linha = 0; linha < 2;linha++){
        for(int coluna = 0;coluna < 3;coluna++){
            printf("Insira valor da posicao matriz[%d][%d]\n", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    for(int linha = 0; linha < 2;linha++){
        for(int coluna = 0;coluna < 3;coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}