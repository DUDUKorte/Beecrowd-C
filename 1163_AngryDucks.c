#include <stdio.h>
#include <math.h>

int main(){
    long double h, vo, a, vox, voy, alcance, h0, d, pi = 3.14159, g = 9.80665 ;
    int nlogoina_inicio, nlogonia_final, n;

    while(scanf("%Lf", &h0) != EOF){
        h = 0.0;
        scanf("%d %d", &nlogoina_inicio, &nlogonia_final);
        scanf("%d", &n);

        for(int i = 0; i < n; i++){
            scanf("%Lf %Lf", &a, &vo);
            
            a = ((a * pi) / 180.0); // convert from degrees to radians

            voy = vo*sin(a);
            vox = vo*cos(a);

            d = ((vo * sin(a)) * (vo * sin(a))) / (2 * g);
            h = h0 + d;
            
            d = ((vox*voy)/g) +  (vox * (sqrt((2*h)/g)));

            printf("%.5Lf -> %s\n", d, d > nlogoina_inicio && d < nlogonia_final ? "DUCK" : "NUCK");
            
        }
    }

    return 0;
}