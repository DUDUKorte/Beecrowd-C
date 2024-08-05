#include <stdio.h>
#include <math.h>

int main(){

    const double g = 9.80665;
    const double pi = 3.14159;
    double h, vo, a;
    int nlogoina_inicio, nlogonia_final, n;
    scanf("%lf", &h);
    scanf("%d %d", &nlogoina_inicio, &nlogonia_final);
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%lf %lf", &a, &vo);
        a = (a * (pi / 180)) * 2; // convert from degrees to radians

        double d = (pow(vo, 2) * sin(a))/g + h;
        printf("%.5lf\n", d);
    }

    return 0;
}