/*
Questão 6 - Eduardo Nogueira Korte
Pronto
*/

#include <stdio.h>

int calcPermitetroParalelogramo(int h, int b){
    return h*2+b*2;
}

int main(){

    int h, b;
    scanf("%d %d", &h, &b);
    printf("%d", calcPermitetroParalelogramo(h, b));

    return 0;
}