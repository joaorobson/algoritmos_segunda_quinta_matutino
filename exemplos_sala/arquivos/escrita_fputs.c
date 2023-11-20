#include <stdio.h>

int main(){
    FILE *f;
    f = fopen("arquivo.txt", "a");
    if(f == NULL){
        printf("Erro ao abrir o arquivo!!!\n");
    }

    fputs("1\n", f);
    fputs("2\n", f);
    fputs("3\n", f);

    fclose(f);

    return 0;
}