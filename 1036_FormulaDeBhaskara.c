#include <stdio.h>
#include <math.h>

int main(void){
  double a, b, c, delta, r1, r2;
  scanf("%lf %lf %lf", &a, &b, &c);
	
  delta = sqrtl((b*b) - (4*a*c));
	r1 = ((b*-1) + delta)/(2*a);
	r2 = ((b*-1) - delta)/(2*a);

	if(!(isnan(r1) || isnan(r2) || isinf(r1) || isinf(r2))){
		printf("R1 = %.5lf\n", r1);
		printf("R2 = %.5lf\n", r2);
	}else{
		printf("Impossivel calcular\n");
	}

  return 0;
}