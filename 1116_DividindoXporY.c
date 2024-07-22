#include <stdio.h>

int main(){

	int cases;
	float x, y;
	scanf("%d", &cases);

	for(int i = 0; i < cases; i++){
		scanf("%f %f", &x, &y);
		if(y == 0){ printf("divisao impossivel\n"); continue;}

		printf("%.1f\n", x/y);
		
	}
	
	return 0;
}