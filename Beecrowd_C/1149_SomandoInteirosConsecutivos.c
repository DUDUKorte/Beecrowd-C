#include <stdio.h>

int main(){

    int a, n, c = 0, tmp_an, soma = 0;

    while(1){
        scanf("%d", &tmp_an);
        if(tmp_an > 0){
            if(c == 0){
                a = tmp_an;
                c++;
            }else{
                n = tmp_an;
                break;
            }
        }
    }

    for(int i = 0; i <= n-1; i++){
        soma += a + i;
    }

    printf("%d\n", soma);

    return 0;
}
