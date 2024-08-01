#include <stdio.h>
#include <math.h>

int main(){

    double l, c, p;
    while(scanf("%lf %lf %lf", &l, &c, &p) && l > 0){
        int resultado = sqrtf((l*c) / (p/100));
        printf("%d\n", resultado);
    }

    return 0;
}