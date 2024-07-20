#include <stdio.h>

int main(void){

	int n;
	scanf("%d", &n);

	for(int i =0 ; i < n; i++){
		double num1, num2, num3, media;
		scanf("%lf %lf %lf", &num1, &num2, &num3);

		media = ((num1 * 2) + (num2 * 3) + (num3 * 5)) / (2+3+5);
		printf("%.1lf\n", media);
		
	}
	
	return 0;
}