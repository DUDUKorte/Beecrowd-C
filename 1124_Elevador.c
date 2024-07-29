#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int l, c, r1, r2;
    while(1){
        scanf("%d %d %d %d", &l, &c, &r1, &r2);
        if(l+c+r1+r2 == 0){ break; }

        double diagonal = sqrtf((double)(l*l) + (double)(c*c));
        int area_circulos = (3.14159 * (r1*r1)) + (3.14159 * (r2*r2));

        int r2_aux = r2;
        r1 = r1*2; r2 = r2*2;
        int maior = r1 > r2 ? r1 : r2;

        if(((r1+r2 <= l && maior <= c) || (r1+r2 <= c && maior <= l)) || (diagonal > r1+r2 && (r1+r2_aux <= l || r1+r2_aux <= c))){
            //printf("l = %d\nc = %d\nr1 = %d\nr2 = %d\nd = %lf\n", l, c, r1, r2, diagonal);
            printf("S\n");
        }else{
            //printf("l = %d\nc = %d\nr1 = %d\nr2 = %d\nac = %lf\nlc = %d\n", l, c, r1, r2, area_circulos, l*c);
            printf("N\n");
        }

    }

    return 0;
}