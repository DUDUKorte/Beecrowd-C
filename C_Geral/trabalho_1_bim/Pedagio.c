/*
    Pedágio - Problema 3
    Eduardo Nogueira Korte
*/

#include <stdio.h>

int main(){

	int l, d, k, p;
	scanf("%d %d %d %d", &l, &d, &k, &p);
	int custo_pedagios = (k*l) + (p*(l/d)); // (Custo-km * km percorridos) + (preço pedágio * (quantidade de pedagios))
	printf("%d\n", custo_pedagios);
	
	return 0;
}