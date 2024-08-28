#include <stdio.h>

int main(){

    int n, x, y;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int soma = 0;
        scanf("%d %d", &x, &y);
        for(int j = x; j < x+(y*2); j++){
            if(j%2 != 0){
                soma += j;
            }
        }
        printf("%d\n", soma);
    }

    return 0;
}