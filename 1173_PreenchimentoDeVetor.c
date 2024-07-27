#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int vetor_n[10] = {n};
    printf("N[0] = %d\n", vetor_n[0]);

    for(int i = 1; i < 10; i++){
        vetor_n[i] = vetor_n[i-1]*2;
        printf("N[%d] = %d\n", i, vetor_n[i]);
    }

    return 0;
}