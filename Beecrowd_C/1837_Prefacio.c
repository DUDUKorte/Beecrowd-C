#include<stdio.h>

int main(void){

	int a, b, q, r;
	scanf("%d %d", &a, &b);

	r =  a % b;
	q =  a / b;
	
	if((a < 0) && (b < 0)){
		if(((r < 0) && (q <= 0)) || ((r < 0) && (q > 0))){
			q++;
			r = -(b*q) + a;
		}
	}else if ((r < 0) && (q <= 0)){
		q--;
		r = -(b*q) + a;
	}else if((r< 0) && (q > 0)){
		q++;
		r = -(b*q) + a;
	}

	printf("%d %d\n", q, r);
	
	return 0;
}