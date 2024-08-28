#include <stdio.h>

int main(void){

	int maior = 0, pos = 0;
	
	for(int i = 1; i <= 100; i++){
		int num;
		scanf("%d", &num);
		if(num > maior){
			maior = num;
			pos = i;
		}
	}
	printf("%d\n%d\n", maior, pos);
	
	return 0;
}