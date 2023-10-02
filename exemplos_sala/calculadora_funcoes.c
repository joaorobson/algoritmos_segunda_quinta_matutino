#include <stdio.h>

// como eu declaro minha função
// dizer o tipo do retorno
// dizer o nome da função
// dizer o número de parâmetros e seus tipos

int soma(int a, int b){
    int resultado = a + b;
    return resultado;
}

int subtracao(int a, int b){
    int resultado = a - b;
    return resultado;
}

// usamos void quando uma função não tem retorno ("return")
void imprimeResultado(int resultado){
    printf("resultado da soma: %d\n", resultado);
}

// função main é o ponto inicial dos códigos
int main(){
    int resultado, valor1, valor2;
    char operacao;

    printf("Insira uma operacao:\n");
    scanf("%c", &operacao);
    
    printf("Insira dois valores:\n");
    scanf("%d", &valor1);
    scanf("%d", &valor2);


    //printf("Chamando a funcao soma...\n");
    if(operacao == '+'){
        resultado = soma(valor1, valor2);
    } else if(operacao == '-') {
        resultado = subtracao(valor1, valor2);
    }
    // repete para outras operações
    imprimeResultado(resultado);
    return 0;
}