#include <stdio.h>

int main(){
    float valor, somaPositivos;
    int numPositivos;
    somaPositivos = 0;
    numPositivos = 0;
    for(int i = 0; i < 6;i++){
        scanf("%f", &valor);
        if(valor > 0){
            somaPositivos = somaPositivos + valor;
            numPositivos++;
        }
    }

    printf("%d valores positivos\n", numPositivos);
    printf("%.1f\n", somaPositivos/numPositivos);


    return 0;
}