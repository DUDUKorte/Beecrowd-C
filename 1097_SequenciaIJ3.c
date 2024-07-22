#include<stdio.h>

int main(){

    int i = 1, orig_j = 7;

    for(int j = 7; i <= 9; j--){
        printf("I=%d J=%d\n", i, j);

        if(j <= orig_j-2){
            j += 4;
            orig_j = j;
            i += 2;
            
        }
    }

    return 0;
}