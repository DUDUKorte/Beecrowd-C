/*
Questão 8 - Eduardo Nogueira Korte
Pronto
*/
#include <stdio.h>
#include <math.h>

float calcPerimetroTriangulo(h, b){
    return hypot(b/2.0, h)*2 + b;
}

int main(){

    int h, b;
    scanf("%d %d", &h, &b);
    printf("%d", calcPerimetroTriangulo(h, b));

    return 0;
}