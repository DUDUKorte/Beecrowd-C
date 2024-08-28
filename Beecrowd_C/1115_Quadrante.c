#include <stdio.h>

int main(void){

	double num1, num2;

	while(1){

		scanf("%lf %lf", &num1, &num2);
		
		if(num1 == 0 || num2 == 0){
				break;
		}
	
		if(num1 > 0){
				if(num2 > 0){
						printf("primeiro\n");
				}else{
						printf("quarto\n");
				}
		}else if (num1 < 0){
				if(num2 > 0){
						printf("segundo\n");
				}else{
						printf("terceiro\n");
				}
		}
	}

	return 0;
}