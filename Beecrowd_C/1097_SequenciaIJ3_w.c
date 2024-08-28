#include <stdio.h>

int main(){

    int i = 1, orig_j = 7, j = 7;

    while(i <= 9){
        printf("I=%d J=%d\n", i, j);
        if(j <= orig_j-2){
            j += 4;
            orig_j = j;
            i += 2;
            continue;
        }
        j--;
    }

    return 0;
}