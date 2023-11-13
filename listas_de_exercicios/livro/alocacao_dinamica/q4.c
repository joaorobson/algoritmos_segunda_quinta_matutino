#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("insira o tamanho do vetor: ");
    scanf("%d", &n);
    int *vetor = (int*) malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", vetor[i]);
    }
    return 0;
}