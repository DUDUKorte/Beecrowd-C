#include <stdio.h>

int calcPerimetroPolygon(int n, int b){
    return n*b;
}

int main(){

    int n, b;
    scanf("%d %d", &n, &b);
    printf("%d\n", calcPerimetroPolygon(n,b));

    return 0;
}