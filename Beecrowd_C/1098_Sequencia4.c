#include <stdio.h>

int main(){

    double i = 0, orig_j = 1, j = 1, soma = 0.0;

    while(i <= 2){
            if((i<0.1) || (i<1.1 && i>0.9) || (i >= 1.9)){
                    printf("I=%.0lf J=%.0lf\n", i, j);
            }else{
                    printf("I=%.1lf J=%.1lf\n", i, j);
            }
            if(j >= orig_j+2){
                    soma += 0.2;
                    j = 1 + soma;
                    orig_j = j;
                    i += 0.2;
                    continue;
            }
            j++;
    }

    return 0;
}