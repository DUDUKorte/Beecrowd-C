/*
Questão 7 - Eduardo Nogueira Korte
Pronto
*/
#include <stdio.h>

float calcAreaTriangulo(h, b){
    return (b*h)/2.0;
}

int main(){

    int h, b;
    scanf("%d %d", &h, &b);
    printf("%d", calcAreaTriangulo(h, b));

    return 0;
}