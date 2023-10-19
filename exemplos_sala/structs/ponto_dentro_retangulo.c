#include <stdio.h>
#include <math.h>

struct ponto {
    int x;
    int y;
};

struct retangulo {
    struct ponto pontoA;
    struct ponto pontoD;
};

int pontoEstaDentroDoRetangulo(struct retangulo r, struct ponto p){
    if(p.y <= r.pontoA.y && p.y >= r.pontoD.y &&
       p.x >= r.pontoA.x && p.x <= r.pontoD.x){
        return 1;
    }
    // ponto está fora do retângulo
    return 0;
}

int main(){
    struct retangulo ret;
    struct ponto ponto1;

    printf("Insira as posicoes do ponto a (ponto superior esquerdo):\n");
    printf("Coordenada x do ponto a: ");
    scanf("%d", &ret.pontoA.x);
    printf("Coordenada y do ponto a: ");
    scanf("%d", &ret.pontoA.y);

    printf("Insira as posicoes do ponto d (ponto inferior direito):\n");
    printf("Coordenada x do ponto d: ");
    scanf("%d", &ret.pontoD.x);
    printf("Coordenada y do ponto d: ");
    scanf("%d", &ret.pontoD.y);


    printf("Insira as posicoes do ponto 1:\n");
    printf("Coordenada x do ponto 1: ");
    scanf("%d", &ponto1.x);
    printf("Coordenada y do ponto 1: ");
    scanf("%d", &ponto1.y);

    int pontoDentroDoRetangulo = pontoEstaDentroDoRetangulo(ret, ponto1);

    if(pontoDentroDoRetangulo){
        printf("ponto1 esta dentro do retangulo ret\n");
    } else {
        printf("ponto1 nao esta dentro do retangulo ret\n");
    }


    return 0;
}