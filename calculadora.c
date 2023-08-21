#include <stdio.h>

int main(){
    long long int numero1;
    long long int numero2;
    long long int resultado;
    char operacao;

    printf("Insira uma operacao:\n");
    scanf("%c", &operacao);

    printf("Insira dois numeros:\n");
    scanf("%lld", &numero1);
    scanf("%lld", &numero2);

    if(operacao != '+' && operacao != '-' && operacao != '*' &&
      operacao != '/' && operacao != '%'){
        printf("OPERACAO INVALIDA!!\n");
    } else {
        if(operacao == '+'){
            resultado = numero1 + numero2;
        } else if(operacao == '-'){
            resultado = numero1 - numero2;
        } else if(operacao == '*'){
            resultado = numero1 * numero2;
        } else if(operacao == '/'){
            resultado = numero1 / numero2;
        } else if(operacao == '%'){
            resultado = numero1 % numero2;
        } 
        printf("resultado: %lld\n", resultado);
        printf("operacao: %c\n", operacao);
    }

 


    return 0;
    
}