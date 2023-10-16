#include <stdio.h>
#include <math.h>

typedef struct ponto {
    int x;
    int y;
} Ponto;

int main(){
    Ponto ponto1, ponto2;
    printf("Insira a coordenada x do ponto1: ");
    scanf("%d", &ponto1.x);
    printf("Insira a coordenada y do ponto1: ");
    scanf("%d", &ponto1.y);

    printf("Insira a coordenada x do ponto2: ");
    scanf("%d", &ponto2.x);
    printf("Insira a coordenada y do ponto2: ");
    scanf("%d", &ponto2.y);

    printf("Distancia do ponto1 ate ponto2: %f\n", 
            sqrt(pow(ponto2.x - ponto1.x, 2)  + 
                pow(ponto2.y - ponto1.y, 2)));

    return 0;
}