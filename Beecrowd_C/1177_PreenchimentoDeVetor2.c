#include <stdio.h>

int main(){

    int n, c = 0;
    scanf("%d", &n);

    for(int i = 0; i < 1000; i++){
        if(c == n){ c = 0; }
        printf("N[%d] = %d\n", i, c);
        c++;
    }

    return 0;
}