/*
Questão 5 - Eduardo Nogueira Korte
Pronto
*/
#include <stdio.h>

int calcAreaParalelogramo(h, b){
    return b*h;
}

int main(){

    int h, b;
    scanf("%d %d", &h, &b);
    printf("%d", calcAreaParaleloGramo(h, b));

    return 0;
}