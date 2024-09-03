/*
Questão 8 - Eduardo Nogueira Korte
Pronto
*/
#include <stdio.h>
#include <math.h>

float calcPerimetroTriangulo(float h, float b){
    return hypot(b/2.0, h)*2 + b;
}

int main(){

    float h, b;
    scanf("%f %f", &h, &b);
    printf("%.2f", calcPerimetroTriangulo(h, b));

    return 0;
}