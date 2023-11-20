#include <stdio.h>

int main(){
    FILE *f;
    f = fopen("arquivo.txt", "w");
    if(f == NULL){
        printf("Erro ao abrir o arquivo!!!\n");
    }

    fprintf(f, "notas:\n");
    fprintf(f, "nota = %d\n", 8);
    fprintf(f, "nota = %d\n", 9);
    fprintf(f, "nota = %d\n", 10);
    fclose(f);

    return 0;
}