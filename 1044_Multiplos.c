#include <stdio.h>

int a, b = 0;

int main(void){
	
	scanf("%d %d", &a, &b);
	int multiplos = 0;
	
	if(a > b){
		if(a%b==0){ multiplos = 1;}
	}else{
		if(b%a==0){ multiplos = 1;}
	}

	multiplos ? printf("Sao Multiplos\n") : printf("Nao sao Multiplos\n");
	
	return 0;
}