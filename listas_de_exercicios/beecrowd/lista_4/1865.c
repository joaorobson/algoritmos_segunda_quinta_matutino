#include <stdio.h>
#include <string.h>

// passando como parâmetro uma string
void ehOThor(char heroi[]){
    if(strcmp(heroi, "Thor") == 0){
        printf("Y\n");
    } else {
        printf("N\n");
    }
}


int main(){
    int numEntradas, forca;
    char heroi[100];
    scanf("%d", &numEntradas);

    for(int i = 0;i < numEntradas;i++){
        scanf("%s", heroi);
        scanf("%d", &forca);
        ehOThor(heroi);
    }

    return 0;
}