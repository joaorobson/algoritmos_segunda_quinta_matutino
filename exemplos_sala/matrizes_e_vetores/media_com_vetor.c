#include <stdio.h>

int main(){
    double notas[4];
    double pesos[4] = {0.1, 0.2, 0.3, 0.4};
    double notaFinal = 0;

    char nomeAluno[30];

    printf("Insira o nome do aluno:\n");
    scanf("%[^\n]s", &nomeAluno);

    printf("Insira 4 notas do(a) aluno(a) %s:\n", nomeAluno);

    for(int i = 0;i <= 3;i++){
        scanf("%lf", &notas[i]);
    }

    printf("Notas lidas:\n");
    for(int i = 0;i <= 3;i++){
        printf("Nota da lista %d: %.2lf\n", i + 1, notas[i]);
    }

    printf("Calculando nota final...\n");
    for(int i = 0;i <= 3;i++){
        printf("Nota da lista %d x peso %d: %.2lf\n", i + 1, i + 1, pesos[i]*notas[i]);
        notaFinal = notaFinal + (pesos[i]*notas[i]);
    }

    printf("Nota final do(a) aluno(a) %s: %.2lf\n", nomeAluno, notaFinal);

    return 0;
}