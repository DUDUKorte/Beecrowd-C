#include <stdio.h>
#include <math.h>
double calcPolygon(double n,double b){
    double cotangent = 1.0 / tan(3.14159 / 4.0);
    return 1.0/4.0 * n * pow(b, 2) * cotangent;
}

int main(){
    double n, b;
    scanf("%lf %lf", &n, &b);
    printf("%.2lf\n", calcPolygon(n,b));
    return 0;
}