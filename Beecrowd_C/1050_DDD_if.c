#include<stdio.h>

int main(void){
	char destination[][80] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};
	int ddd;
	scanf("%d", &ddd);

	if(ddd == 61)
		printf("%s\n", destination[0]);
	else if (ddd == 71)
		printf("%s\n", destination[1]);
	else if(ddd == 11)
		printf("%s\n", destination[2]);
	else if (ddd == 21)
		printf("%s\n", destination[3]);
	else if (ddd == 32)
		printf("%s\n", destination[4]);
	else if (ddd == 19)
		printf("%s\n", destination[5]);
	else if (ddd == 27)
		printf("%s\n", destination[6]);
	else if (ddd == 31)
		printf("%s\n", destination[7]);
	else
		printf("DDD nao cadastrado\n");
	
	return 0;
}