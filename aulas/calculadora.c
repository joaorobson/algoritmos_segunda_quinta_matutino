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

    printf("operacao: %c\n", operacao);

    if(operacao == '+'){
        printf("resultado: %lld\n", numero1 + numero2);
    } else if(operacao == '-'){
        printf("resultado: %lld\n", numero1 - numero2);
    } else if(operacao == '*'){
        printf("resultado: %lld\n", numero1 * numero2);
    } else if(operacao == '/'){
        printf("resultado: %lld\n", numero1 / numero2);
    } else if(operacao == '%'){
        printf("resultado: %lld\n", numero1 % numero2);
    } else if(operacao == 'c' && numero1 > numero2){
        printf("%lld maior que %lld\n", numero1, numero2);
    } else if(operacao == 'c' && numero1 < numero2){
        printf("%lld menor que %lld\n", numero1, numero2);
    } else if(operacao == 'c' && numero1 == numero2){
        printf("%lld igual a %lld\n", numero1, numero2);
    } else {
        printf("OPERACAO INVALIDA!!!\n");
    }

    

 


    return 0;
    
}