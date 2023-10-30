#include <stdio.h>

void multiplicaPor2(int* p){
    printf("valor de p: %p\n", p);
    *p = (*p)*2;
}
int main(){
    int a = 10;
    printf("valor de a: %d\n", a);
    printf("endereco de a: %p\n", &a);
    multiplicaPor2(&a);
    printf("valor de a: %d\n", a);

    return 0;
}