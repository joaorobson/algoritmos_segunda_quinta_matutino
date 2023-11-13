#include <stdio.h>

typedef struct aluno {
    int matricula; // 4 bytes
    char nome[30]; // 30 bytes
    float notas[3]; // 12 bytes
} Aluno;

int main(){
    printf("tamanho da struct aluno: %d bytes\n", sizeof(Aluno));
    return 0;
}