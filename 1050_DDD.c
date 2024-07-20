#include <stdio.h>
#include <search.h>

// Variáreis globais
int ddd[] = {61, 71, 11, 21, 32, 19, 27, 31};
char destination[][80] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};
int entrada = 0;

int main(void){

		scanf("%d", &entrada);

		for(int i = 0 ; i < (sizeof(destination)/sizeof(destination[0])) ; i++){
				if(entrada == ddd[i]){
						printf("%s\n", destination[i]);
						return 0;
				}
		}

		printf("DDD nao cadastrado\n");

		return 0;
}