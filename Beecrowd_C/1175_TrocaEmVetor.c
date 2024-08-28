#include <stdio.h>

int main(){

    int vetor[20] = {0};
    int array_len = sizeof(vetor) / sizeof(vetor[0]);
    for(int i = 0; i < array_len; i++){
        int num;
        scanf("%d", &num);
        vetor[(array_len-1)-i] = num;
    }
    for(int i = 0; i < array_len; i++){
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}