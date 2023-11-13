#include <stdio.h>

int main(){

    printf("tamanho de um int: %d bytes\n", sizeof(int));
    printf("tamanho de um long long int: %d bytes\n", sizeof(long long int));
    printf("tamanho de um char: %d byte\n", sizeof(char));
    printf("tamanho de um float: %d bytes\n", sizeof(float));
    printf("tamanho de um double: %d bytes\n", sizeof(double));

    return 0;
}