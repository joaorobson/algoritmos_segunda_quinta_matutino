#include <stdio.h>

int main(){

    int x;
    float y;
    float resultado;

    scanf("%d", &x);
    scanf("%f", &y);

    resultado = x/y;

    printf("%.3f km/l\n", resultado);


    return 0;
}