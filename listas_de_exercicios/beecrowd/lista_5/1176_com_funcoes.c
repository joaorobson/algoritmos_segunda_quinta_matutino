#include <stdio.h>


unsigned long long int retornaNumFiboComRecursao(int pos, unsigned long long int* numsFibo){
    // evita chamadas desnecessária para mesma posição, ou seja,
    // uma posição para qual já calculei o número de Fibonacci
    if(numsFibo[pos] != 0){
        return numsFibo[pos];
    }
    else if(pos == 0){
        return 0;
    } else if(pos == 1){
        return 1;
    } else {
        numsFibo[pos] = retornaNumFiboComRecursao(pos - 1, numsFibo) + retornaNumFiboComRecursao(pos - 2, numsFibo);
        return numsFibo[pos];
    }
}



unsigned long long int retornaNumFiboComVetor(int pos){
    unsigned long long int seqFibo[61];

    // calculando sequência de fibonacci
    // primeira forma
    /* seqFibo[0] = 0;
    seqFibo[1] = 1;
    for(int i = 2;i <= 60;i++){
        seqFibo[i] = seqFibo[i - 1] + seqFibo[i - 2];
    } */

    // segunda forma
    for(int i = 0;i <= 60;i++){
        if(i <= 1){
            seqFibo[i] = i;
        } else {
            seqFibo[i] = seqFibo[i - 1] + seqFibo[i - 2];
        }
    }



    return seqFibo[pos];
}



int main(){
    int posSeqFibo, numEntradas;
    unsigned long long int valorNaSeqFibo;
    unsigned long long int seqFibo[61];
    for(int i = 0;i <= 60;i++){
        seqFibo[i] = 0;
    }
    scanf("%d", &numEntradas);
    for(int i = 0;i < numEntradas;i++){
        scanf("%d", &posSeqFibo);
        valorNaSeqFibo = retornaNumFiboComRecursao(posSeqFibo, seqFibo);
        printf("Fib(%d) = %lld\n", posSeqFibo, valorNaSeqFibo);
    }

    return 0;
}