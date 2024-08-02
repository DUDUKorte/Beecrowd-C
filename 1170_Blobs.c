#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        double kg, dias = 0;
        scanf("%lf", &kg);
        while(kg > 1){
            kg /= 2.0;
            dias++;
        }
        printf("%.0lf dias\n", dias);
    }

    return 0;
}