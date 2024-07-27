#include <stdio.h>

int main(){

    int c = 0;

    for(int i = 0; i < 100; i++){
        double num;
        scanf("%lf", &num);
        num <= 10 ? printf("A[%d] = %.1lf\n", c, num) : 0;
        num <= 10 ? c++ : 0;
    }

    return 0;
}