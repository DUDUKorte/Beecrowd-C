//Feito - Problema 4
#include <stdio.h>

int main(){

    int a;
    scanf("%d", &a);
    int result = a - (a%76) + 86;
    printf("%d\n", result);

    return 0;
}