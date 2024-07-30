#include <stdio.h>

int main(){

    int pares[5], impares[5];
    int p = 0, im = 0;

    for(int i = 0; i < 15; i++){
        if(p>4){
            for(int j = 0; j < 5; j++){
                printf("par[%d] = %d\n", j, pares[j]);
                pares[j] = 0;
            }
            p = 0;
        }if(im > 4){
            for(int j = 0; j < 5; j++){
                printf("impar[%d] = %d\n", j, impares[j]);
                impares[j] = 0;
            }
            im = 0;
        }

        int num;
        scanf("%d", &num);
        if(num%2 == 0){
            pares[p] = num;
            p++;
        }else{
            impares[im] = num;
            im++;
        }
    }

    for(int i = 0; i < im; i++){
        printf("impar[%d] = %d\n", i, impares[i]);
    }
    for(int i = 0; i < p; i++){
        printf("par[%d] = %d\n", i, pares[i]);
    }

    return 0;
}