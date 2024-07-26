#include <stdio.h>

int main(){
    double s = 1, j = 2;

    for(double i = 3; i < 40; i+=2){
        s += i / j;
        j *= 2;
    }

    printf("%.2lf\n", s);
    return 0;

}