#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro {
    char nome[30];
    int idade;
    char endereco[40];
} Cadastro;

Cadastro* criaListaDeCadastros(int n){
    // Cadastro cadastros[n];
    Cadastro* cadastros = (Cadastro*) malloc(n*sizeof(Cadastro));
    return cadastros;
}

int main(){
    int n;
    printf("insira um numero de cadastros: ");
    scanf("%d", &n);
    Cadastro* cadastros = criaListaDeCadastros(n);

    // cadastros é um ponteiro
    //printf("valor de cadastros: %p\n", cadastros);
    // ponteiro guarda um endereco de memoria
    // (*cadastros).endereco mostra valor da primeira struct da lista de cadastros
    // ((*cadastros) + 1) mostra valor da segunda struct da lista de cadastros

    for(int i = 0;i < n;i++){
        printf("nome: ");
        scanf("%s", cadastros[i].nome);
        printf("idade: ");
        scanf("%d", &cadastros[i].idade);
        printf("endereco: ");
        scanf("%s", cadastros[i].endereco);
    }

    printf("pessoas cadastradas:\n");
    for(int i = 0;i < n;i++){
        printf("nome: %s\n", cadastros[i].nome);
        printf("idade: %d\n", cadastros[i].idade);
        printf("endereco: %s\n", cadastros[i].endereco);
    }
 

    return 0;
}