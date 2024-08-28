#include<stdio.h>

int main(){

    int x, y, soma = 0;
    scanf("%d %d", &x, &y);

    for(int i = x > y ? y : x ; i <= (x > y ? x : y) ; i++){ soma += (i%13 != 0 ? i : 0); }

    printf("%d\n", soma);

    return 0;
}