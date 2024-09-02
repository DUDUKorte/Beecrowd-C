/*
Questão 4 - Eduardo Nogueira Korte
Pronto
*/
#include <stdio.h>

int calcPerimetroRetangulo(a, b){
    return a*2+b*2;
}

int main(){

    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", calcPerimetroRetangulo(a, b));

    return 0;
}