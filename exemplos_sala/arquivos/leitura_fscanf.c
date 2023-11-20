#include <stdio.h>

int main(){
    int nota;
    FILE *f;
    f = fopen("arquivo.txt", "r");
    if(f == NULL){
        printf("Erro ao abrir o arquivo!!!\n");
    }
    char linha1[20];
    fscanf(f, "%s", linha1);
    int i = 1;
    while(1){
        fscanf(f, "%d", &nota);
        if(feof(f)){
            break;
        }
        printf("nota[%d] = %d\n", i, nota);
        i++;
    }
    

    fclose(f);

    return 0;
}