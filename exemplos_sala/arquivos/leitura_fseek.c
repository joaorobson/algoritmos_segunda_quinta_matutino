#include <stdio.h>

int main(){
    FILE *f;
    f = fopen("arquivo.txt", "w");
    if(f == NULL){
        printf("Erro ao abrir o arquivo!!!\n");
    }

    int valor, v[5] = {1, 2, 3, 4, 5};

    fwrite(v, sizeof(int), 5, f);
    fclose(f);

    f = fopen("arquivo.txt", "r");
    // começa a ler da terceira posição do arquivo
    fseek(f, 2*sizeof(int), SEEK_SET);
    fread(&valor, sizeof(int), 1, f);
    printf("valor lido: %d\n", valor);
    fclose(f);

    return 0;
}