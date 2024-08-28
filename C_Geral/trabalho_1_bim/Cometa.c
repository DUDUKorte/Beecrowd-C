/*
    Cometa Halley - Problema 4
    Eduardo Nogueira Korte
*/

#include <stdio.h>

int main(){

    int a;
    scanf("%d", &a);
    int result = a - (a%76) + 86;
    printf("%d\n", result);

    return 0;
}