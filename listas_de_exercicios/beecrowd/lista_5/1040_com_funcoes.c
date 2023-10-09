#include <stdio.h>

float calculaMediaInicial(float* notas){
    float pesos[4] = {2, 3, 4, 1}, soma = 0;
    // primeira forma de calcular a média
    // media = (notas[0] + notas[1] + notas[2] + notas[3])/4;

    // segunda forma de calcular a média
    for(int i = 0;i < 4;i++){
        // mesma coisa que soma = soma + notas[i]*pesos[i]
        soma += notas[i]*pesos[i];
    }

    return soma/10;
}

// float mediaInicial = media;
float calculaMediaFinalAposExame(float mediaInicial){
    float notaExame;
    scanf("%f", &notaExame);
    printf("Nota do exame: %.1f\n", notaExame);
    float mediaFinal = (mediaInicial + notaExame)/2;
    return mediaFinal;  
}

int main(){
    // nota0*peso0 + nota1*peso1 + nota2*peso2 + nota3*peso3
    float notas[4], media;

    scanf("%f", &notas[0]);
    scanf("%f", &notas[1]);
    scanf("%f", &notas[2]);
    scanf("%f", &notas[3]);

    media = calculaMediaInicial(notas);
    
    printf("Media: %.1f\n", media);

    if(media < 5){
        printf("Aluno reprovado.\n");
    } else if(media >= 5 && media <= 6.9){
        printf("Aluno em exame.\n");
        float mediaFinal = calculaMediaFinalAposExame(media);
        if(mediaFinal >= 5){
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", mediaFinal);
    } else {
        printf("Aluno aprovado.\n");
    }

    return 0;
}