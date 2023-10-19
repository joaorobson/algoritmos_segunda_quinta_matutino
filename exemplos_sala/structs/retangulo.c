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

float calculaDistanciaEntrePontos(struct ponto ponto1, struct ponto ponto2){
    float distancia = sqrt(pow(ponto1.x - ponto2.x, 2) + 
                          pow(ponto1.y - ponto2.y, 2));
    return distancia;
}

float calculadDiagonalRetangulo(struct retangulo r){
    float diagonal = calculaDistanciaEntrePontos(r.pontoA, r.pontoD);
    return diagonal;
}


float calculaAreaRetangulo(struct retangulo r){
    float diagonal = calculadDiagonalRetangulo(r);
    struct ponto pontoB = {r.pontoA.x, r.pontoD.y};

    float altura = calculaDistanciaEntrePontos(r.pontoA, pontoB);
    float base = calculaDistanciaEntrePontos(pontoB, r.pontoD);

    float area = base*altura;
    return area;
}

float calculaPerimetroRetangulo(struct retangulo r){
    struct ponto pontoB = {r.pontoA.x, r.pontoD.y};

    float altura = calculaDistanciaEntrePontos(r.pontoA, pontoB);
    float base = calculaDistanciaEntrePontos(pontoB, r.pontoD);

    float perimetro = 2*base + 2*altura;
    return perimetro;
};



int main(){
    struct retangulo ret;

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

    printf("Comprimento da diagonal do retangulo ret: %f\n", 
            calculadDiagonalRetangulo(ret));

    printf("Area do retangulo: %f\n", calculaAreaRetangulo(ret));
    printf("Perimetro do retangulo: %f\n", calculaPerimetroRetangulo(ret));


    return 0;
}