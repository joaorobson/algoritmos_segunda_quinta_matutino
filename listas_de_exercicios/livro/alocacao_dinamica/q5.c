#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;

    do{
        printf("insira um valor positivo: ");
        scanf("%d", &n);
    } while (n < 0);

    int *vetor = (int*) malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        do{
            printf("vetor[%d]: ", i);
            scanf("%d", &vetor[i]);
        } while(vetor[i] < 2);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", vetor[i]);
    }
    return 0;
}