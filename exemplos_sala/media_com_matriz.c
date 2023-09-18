#include <stdio.h>

int main(){

    // 2 alunos, cada um com 4 notas
    double notasDosAlunos[2][4];


    // substitui dois fors abaixo (linha 20 a 30)
    for(int linha = 0;linha <= 1;linha++){
        // dentro da linha (pode ser 0 ou 1)
        for(int coluna = 0;coluna <= 3;coluna++){
            // dentro da coluna (vai de 0 a 3)
            printf("Insira nota %d do aluno %d:\n", coluna + 1, linha + 1);
            scanf("%lf", &notasDosAlunos[linha][coluna]);
        }
    }

    /*
    // lendo as 4 notas do primeiro aluno
    for(int i = 0;i <= 3; i++){
        printf("Insira nota %d do primeiro aluno:\n", i + 1);
        scanf("%lf", &notasDosAlunos[0][i]);
    }

    // lendo as 4 notas do segundo aluno
    for(int i = 0;i <= 3; i++){
        printf("Insira nota %d do segundo aluno:\n", i + 1);
        scanf("%lf", &notasDosAlunos[1][i]);
    }
    */

   // substitui dois fors abaixo (linha 42 a 50)
    for(int linha = 0;linha <= 1;linha++){
        // dentro da linha (pode ser 0 ou 1)
        for(int coluna = 0;coluna <= 3;coluna++){
            printf("Nota %d do aluno %d: %.2lf\n", coluna + 1, linha + 1, notasDosAlunos[linha][coluna]);
        }
    }

    /*
    // imprimindo as 4 notas do primeiro aluno
    for(int i = 0;i <= 3; i++){
        printf("Nota %d do primeiro aluno: %lf\n", i + 1, notasDosAlunos[0][i]);
    }

    // imprimindo as 4 notas do segundo aluno
    for(int i = 0;i <= 3; i++){
        printf("Nota %d do segundo aluno: %lf\n", i + 1, notasDosAlunos[1][i]);
    }
    */
    return 0;
}