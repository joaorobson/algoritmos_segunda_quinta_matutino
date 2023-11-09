#include <stdio.h>
#include <stdlib.h>

int main(){
    // alocação estática
    char string_estatica[1000];
    scanf("%s", string_estatica);
    printf("string estatica: %s\n", string_estatica);

    // alocação dinâmica
    char *string_dinamica;
    string_dinamica = (char*) malloc(1000);
    scanf("%s", string_dinamica);
    printf("string dinamica: %s\n", string_dinamica);


    return 0;
}