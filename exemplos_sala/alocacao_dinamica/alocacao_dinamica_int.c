#include <stdio.h>
#include <stdlib.h>

int main(){
    // alocação estática
    int vetor_int_est[5] = {1,2,3,4,5};
    printf("valores do vetor alocado estaticamente:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", vetor_int_est[i]);
    }
    
    // alocação dinâmica
    int* vetor_int_din = (int*) malloc(5*sizeof(int));
    if(vetor_int_din == NULL){
        printf("Nao foi possivel alocar memoria!\n");
        return 1;
    }
    printf("valores iniciais do vetor alocado usando malloc:\n");
    for (int i = 0; i < 5; i++)
    {
        //scanf("%d", &vetor_int_din[i]);
        printf("%d\n", vetor_int_din[i]);
    }
    
    vetor_int_din = (int*) calloc(100000000, sizeof(int));
    if(vetor_int_din == NULL){
        printf("Nao foi possivel alocar memoria!\n");
        return 1;
    }
    printf("valores iniciais do vetor alocado usando calloc:\n");
    for (int i = 0; i < 5; i++)
    {
        //scanf("%d", &vetor_int_din[i]);
        printf("%d\n", vetor_int_din[i]);
    }

    free(vetor_int_din);


    return 0;
}