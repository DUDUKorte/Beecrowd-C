#include <stdio.h>

int inicio, fim = 0;

int main(void){

	scanf("%d %d", &inicio, &fim);
	int tempo = 0;
	
	if(fim <= inicio){
		tempo += 24 + (fim-inicio);
	}else{
		tempo = fim-inicio;
	}

	printf("O JOGO DUROU %d HORA(S)\n", tempo);
	
	return 0;
}