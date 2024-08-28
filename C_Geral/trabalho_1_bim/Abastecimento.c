/*
    Abastecimento - Problema 2
    Eduardo Nogueira Korte
*/

#include <stdio.h>

int main(){

	int n, total=0;
	scanf("%d", &n);

	if(n>100){total += (n-100)*5; n=100;}
	if(n>30){total += (n-30)*2; n=30;}
	if(n>10){total += (n-10);}
	if(n>0){total+=7;}

	printf("%d\n", total);
	
	return 0;
}