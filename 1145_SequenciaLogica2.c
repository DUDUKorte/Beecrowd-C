#include <stdio.h>

int main(){

    int x, y, c = 0;
    scanf("%d %d", &x, &y);

    for(int i = 1; i <= y; i++){
        c++;
        printf("%d%s", i, c == x || i == y ? "\n" : " ");
        if(c == x || i == y){ c = 0; }
    }

    return 0;
}