// Feito - Problema 1

#include <stdio.h>

int main(){

	int n, copos_quebrados = 0;
	scanf("%d", &n);
	
	for(int i =0; i < n; i++){
		int l, c;
		scanf("%d %d", &l,&c);
		l > c ? copos_quebrados+=c : 0;
	}

	printf("%d\n", copos_quebrados);
	
	return 0;
}