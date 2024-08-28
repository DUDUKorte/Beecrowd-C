#include <stdio.h>

int main(void){

		double num1, num2;
		scanf("%lf %lf", &num1, &num2);

		if(num1 == 0 && num2 != 0){
				printf("Eixo Y\n");
		}else if (num2 == 0 && num1 != 0){
				printf("Eixo X\n");
		}else{
				if(num1 > 0){
						if(num2 > 0){
								printf("Q1\n");
						}else{
								printf("Q4\n");
						}
				}else if (num1 < 0){
						if(num2 > 0){
								printf("Q2\n");
						}else{
								printf("Q3\n");
						}
				}else{
						printf("Origem\n");
				}
		}

		return 0;
}