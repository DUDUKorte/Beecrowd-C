#include <stdio.h>
#include <math.h>

int main(){

	double R1, X1, Y1, R2, X2, Y2, morto = 0;

	while(scanf("%lf %lf %lf %lf %lf %lf", &R1, &X1, &Y1, &R2, &X2, &Y2) != EOF){
		double distancia = sqrtf(((X1-X2)*(X1-X2)) + ((Y1-Y2)*(Y1-Y2)));

		if(distancia + R2 <= R1){
			printf("RICO\n");
		}else{
			printf("MORTO\n");
		}
	}
	
	return 0;
}
