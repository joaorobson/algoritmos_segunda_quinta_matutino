#include <stdio.h>


int main(){
    
    // primeira forma de incializar valores
    // int vetor[5] = {1, 2, 3, 4, 5};

    int vetor[5];

    for(int i = 0;i < 5;i++){
        scanf("%d", &vetor[i]);
    }

    for(int i = 0;i < 5;i++){
        printf("posicao %d: %d\n", i, vetor[i]);
    }


    return 0;
}