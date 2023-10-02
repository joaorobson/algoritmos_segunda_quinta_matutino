#include <stdio.h>
#include <string.h>


void temIdiomaDistinto(int numPessoas, char idiomas[][21]){
    char primeiroIdioma[21];
    strcpy(primeiroIdioma, idiomas[0]);
    int temIdiomaDistinto = 0;
    for(int pessoa = 1;pessoa < numPessoas;pessoa++){
        if(strcmp(idiomas[pessoa], primeiroIdioma) != 0){
            printf("ingles\n");
            temIdiomaDistinto = 1;
            break;
        }
    }
    if(temIdiomaDistinto == 0){
        printf("%s\n", primeiroIdioma);
    }
}


int main(){

    int numEntradas, numPessoas;
    scanf("%d", &numEntradas);

    for(int i = 0;i < numEntradas;i++){
        scanf("%d", &numPessoas);
        char idiomas[numPessoas][21];
        char idioma[21];
        for(int pessoa = 0;pessoa < numPessoas;pessoa++){
            scanf("%s", idioma);
            strcpy(idiomas[pessoa], idioma);
        }

        temIdiomaDistinto(numPessoas, idiomas);
    }


    return 0;
}