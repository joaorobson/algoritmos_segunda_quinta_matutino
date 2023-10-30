#include <stdio.h>

int main(){
    int c = 5, d = 10;
    /* int copiaC = c;

    printf("valor de copiaC: %d\n", copiaC);
    // alterar a cópia de uma variável não altera o valor da variável original
    copiaC = 10; 
    printf("valor de copiaC: %d\n", copiaC);  */

    int *p, *p1;

    p = &c; // alimentando ponteiro com endereço de memória de c
    p1 = p; // endereço de memória armazenado em p1 vai ser igual ao de p

    printf("valor de c: %d\n", c);
    printf("endereco de memoria de c: %p\n", &c);
    printf("valor de p: %p\n", p);
    printf("valor de c a partir de p: %d\n", *p);
    printf("valor de p1: %p\n", p1);
    printf("valor de c a partir de p1: %d\n", *p1);

    printf("Alterando valor de 'c' para 10 por meio de 'p'..\n");
    *p = 10; // alterando o valor de c a partir do ponteiro p
    printf("valor de c: %d\n", c);
    
    printf("valor de d: %d\n", d);
    printf("endereco de memoria de d: %p\n", &d);

    p1 = &d;
    printf("Alterando valor de 'd' para 20 por meio de 'p1'..\n");

    *p1 = 20;
    
    printf("Copiando valor de 'd' para c por meio de 'p1'..\n");

    *p = *p1; // c = d;

    printf("valor de c: %d\n", c);
    printf("endereco de memoria de c: %p\n", &c);
    printf("valor de d: %d\n", d);
    printf("endereco de memoria de d: %p\n", &d);


    return 0;
}