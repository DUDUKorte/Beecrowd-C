#include <stdio.h>

int main(){
    
    for(int i = 0; i < 100; i++){
        double num;
        scanf("%lf", &num);
        num <= 10 ? printf("A[%d] = %.1lf\n", i, num) : 0;
    }
    
    return 0;
}