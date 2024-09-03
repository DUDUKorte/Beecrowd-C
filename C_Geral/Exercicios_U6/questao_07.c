/*
Questão 7 - Eduardo Nogueira Korte
Pronto
*/
#include <stdio.h>

float calcAreaTriangulo(float h, float b){
    return (b*h)/2.0;
}

int main(){

    float h, b;
    scanf("%f %f", &h, &b);
    printf("%f", calcAreaTriangulo(h, b));

    return 0;
}