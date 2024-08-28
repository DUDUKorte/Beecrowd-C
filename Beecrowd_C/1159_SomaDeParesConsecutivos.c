#include <stdio.h>

int main(){

    int x;
    while (1)
    {
        int soma = 0;
        scanf("%d", &x);
        if(x == 0){ return 0; }
        for(int i = x; i<x+10; i++){
            if(i%2==0){
                soma+=i;
            }
        }
        printf("%d\n", soma);
    }
    

    return 0;
}