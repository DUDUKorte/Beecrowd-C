#include<stdio.h>

int main(){

    int x, y;
    scanf("%d %d", &x, &y);

    for(int i = x > y ? y+1 : x+1 ; i < (x > y ? x : y) ; i++){
        if(i%5 == 2 || i%5 == 3){ printf("%d\n", i); }
    }

    return 0;
}