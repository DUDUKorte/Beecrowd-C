#include <stdio.h>

int main(){

    int n, menor = 0, pos = -1;
    scanf("%d", &n);
    int nums[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
        if(pos == -1){ menor = nums[i]; pos=i; }
        if(nums[i] < menor){ menor = nums[i]; pos=i; }
    }

    printf("Menor valor: %d\nPosicao: %d\n", menor, pos);
    
    return 0;
}