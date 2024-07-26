#include <stdio.h>

int main() {

    int x, z, soma = 0, c = 0;
    scanf("%d", &x);

    while(1){
        scanf("%d", &z);
        if(z <= x){
            continue;
        }else{
            break;
        }
    }

    for(int i = x; ;i++){
        soma += i;
        c++;
        if(soma>=z){
            printf("%d\n", c);
            break;
        }
    }

    return 0;
}