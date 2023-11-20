#include <stdio.h>

int main(){
    char conteudo[30];
    FILE *f;
    f = fopen("arquivo.txt", "r");
    if(f == NULL){
        printf("Erro ao abrir o arquivo!!!\n");
    }

    while(fgets(conteudo, 20, f)){
        printf("%s", conteudo);
    }

    fclose(f);

    return 0;
}