#include <stdio.h>
#include <stdlib.h>

int main(){
    // alocação dinâmica
    int* v = (int*) malloc(5*sizeof(int));
    if(v == NULL){
        printf("Nao foi possivel alocar memoria!\n");
        return 1;
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    
    // aumentando vetor de 5 posições para 10 posições
    v = (int*) realloc(v, 10*sizeof(int));

    for (int i = 5; i < 10; i++)
    {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("valores do vetor v:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("v[%d]: %d\n", i, v[i]);
    }

    free(v);

    return 0;
}