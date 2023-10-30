#include <stdio.h>

int main(){
    char c = 'a';
    char *p = &c;

    printf("valor de p: %p\n", p);
    printf("valor de p: %p\n", ++p);

    return 0;
}