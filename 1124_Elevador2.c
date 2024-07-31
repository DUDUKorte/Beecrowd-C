//n tá pronto, ainda n funciona

#include <stdio.h>
#include <math.h>

int main(){
    long double x1, y1, x2, y2, d1, d2;
    int l, c, r1, r2;

    while(1){
        scanf("%d %d %d %d", &l, &c, &r1, &r2);
        if(l+c+r1+r2 == 0){ break; }

        char saida = 'N';
        d1 = r1*2; d2 = r2*2;
        int maior_d = d1 > d2 ? d1 : d2;
        double diagonal = sqrtf(pow(c, 2) + pow(l, 2));
        double resto_d1 = ((sqrtf(pow(d1, 2) + pow(d1, 2)))-d1)/2;
        double resto_d2 = ((sqrtf(pow(d2, 2) + pow(d2, 2)))-d1)/2;

        if(maior_d <= l && maior_d <= c){
            //printf("diagonal = %lf\nresto_d1 = %lf\nresto_d2 = %lf\nd1 = %lf\nd2 = %lf\nresult = %lf\n", diagonal, resto_d1, resto_d2, d1, d2, diagonal - (d1+d2+resto_d1+resto_d2));
            if((diagonal - (d1+d2+resto_d1+resto_d2) >= 0) || (d1+d2 <= l) || (d1+d2) <= c){
                saida = 'S';
            }
        }

        printf("%c\n", saida);

    }

    return 0;
}