/*
Questão 3 - Eduardo Nogueira Korte
Pronto
*/
#include <stdio.h>

int calcAreaRetangulo(a, b){
    return a*b;
}

int main(){

    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", calcAreaRetangulo(a, b));

    return 0;
}