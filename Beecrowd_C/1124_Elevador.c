#include <stdio.h>
#include <math.h>

int main(){
    double x1, y1, x2, y2;
    int l, c, r1, r2, d1, d2;

    while(1){
        scanf("%d %d %d %d", &l, &c, &r1, &r2);
        if(l+c+r1+r2 == 0){ break; }

        char saida = 'N';
        d1 = r1*2; d2 = r2*2;
        int maior_d = d1 > d2 ? d1 : d2;

        x1 = r1; y1 = r1;
        x2 = c - r2; y2 = l - r2;

        if(maior_d <= l && maior_d <= c){
            if(sqrtf(pow(x1-x2, 2) + pow(y1-y2, 2)) >= r1+r2){
                saida = 'S';
            }
        }

        printf("%c\n", saida);

    }

    return 0;
}