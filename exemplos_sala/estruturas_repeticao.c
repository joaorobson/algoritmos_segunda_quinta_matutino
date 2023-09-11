#include <stdio.h>

int main(){
    int i;
    int nota;

    // leia uma nota até essa nota ser positiva
    printf("Insira uma nota positiva!\n");
    scanf("%d", &nota);
    while(nota < 0){
        printf("Insira uma nota positiva!\n");
        scanf("%d", &nota);
    }

    // exemplo acima usando do while
    do{
        printf("Insira uma nota positiva!\n");
        scanf("%d", &nota);
    } while(nota < 0);

    printf("Nota lida: %d\n", nota);

    // imprima o valor de i, de 1 a 10
    for(i = 1; i <= 10;i++){
        printf("Valor de i: %d\n", i);
    }

    return 0;
}