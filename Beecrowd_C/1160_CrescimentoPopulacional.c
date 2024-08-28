#include <stdio.h>

int main(){

    int cases;
    double pa, pb, g1, g2;
    scanf("%d", &cases);

    for(int i = 0; i < cases; i++){
        scanf("%lf %lf %lf %lf", &pa, &pb, &g1, &g2);
        int g1_i = pa * (g1/100.0);
        int g2_i = pb * (g2/100.0);
        double anos = 0;

        while(1){
            if(anos > 100){ break; }
            if(pa > pb){ break; }
            //printf("ANO %lf====================\npa = %lf\npb = %lf\npa + %d = %lf\npb + %d = %lf\n", anos ,pa, pb, g1_i, pa+g1_i, g2_i, pb+g2_i);
            pa += g1_i;
            pb += g2_i;
            g1_i = pa * (g1/100.0);
            g2_i = pb * (g2/100.0);
            anos++;
        }

        anos <= 100 ? printf("%.0lf anos.\n", anos) : printf("Mais de 1 seculo.\n") ;

    }


    return 0;
}