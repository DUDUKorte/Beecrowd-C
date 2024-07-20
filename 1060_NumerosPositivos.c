#include <stdio.h>

int main(void){

	int positivos = 0;
	
	for(int i = 0; i < 6 ; i++){
		int num = 0;
		scanf("%d", &num);
		if(num > 0){ positivos++; }
	}

	printf("%d valores positivos\n", positivos);

	return 0;
}