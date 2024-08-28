#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Ho%s", i+1<n ? " " : "!\n");
    }

    return 0;
}