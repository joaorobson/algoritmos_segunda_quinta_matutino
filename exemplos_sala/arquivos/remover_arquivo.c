#include <stdio.h>

int main(){
    int status = remove("arquivo.txt");
    if(status != 0){
        printf("erro na remocao!!!\n");
    } else {
        printf("arquivo removido com sucesso!\n");
    }
  
    return 0;
}