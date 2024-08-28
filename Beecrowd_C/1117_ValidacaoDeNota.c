#include <stdio.h>

int main(){

	double nota, media = 0;

	int i = 0;
	while(1){
		scanf("%lf", &nota);
		if(nota >= 0 && nota <= 10){
			media += nota;
			i++;
		}else{
			printf("nota invalida\n");
		}
		if(i>=2){ break; }
	}

	printf("media = %.2lf\n", media/2);
	
	return 0;
}