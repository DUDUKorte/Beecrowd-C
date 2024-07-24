#include <stdio.h>

int main(){

    int n, c = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n*4; i++){
        if(c >= 3){
            printf("PUM\n");
            c = 0;
            continue;
        }
        printf("%d ", i);
        c++;
    }

    return 0;
}