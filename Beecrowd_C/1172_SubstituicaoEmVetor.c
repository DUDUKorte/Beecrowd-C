#include <stdio.h>

int main(){

    int x[10];

    for(int i = 0; i < 10; i++){
        int num;
        scanf("%d", &num);
        x[i] = num > 0 ? num : 1;
        printf("X[%d] = %d\n", i, x[i]);
    }

    return 0;
}