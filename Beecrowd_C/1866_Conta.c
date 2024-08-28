#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        num%2 == 0 ? printf("0\n") : printf("1\n");
    }

    return 0;
}