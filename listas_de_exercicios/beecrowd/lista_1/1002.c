#include <stdio.h>

int main(){
    double area;
    double pi =  3.14159;

    scanf("%lf", &area);

    printf("A=%.4lf\n", pi*area*area);

    return 0;
}