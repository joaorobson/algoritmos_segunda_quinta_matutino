#include <stdio.h>

int main(){
    int vetor[3] = {1, 2, 3};

    printf("endereco do vetor: %p\n", vetor);
    printf("valor do primeiro elemento do vetor: %d\n", *vetor);s
    printf("valor do segundo elemento do vetor: %d\n", *(vetor + 1));
    printf("valor do terceiro elemento do vetor: %d\n", *(vetor + 2));

    return 0;
}