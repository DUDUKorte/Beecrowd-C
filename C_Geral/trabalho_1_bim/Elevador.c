//Feito - Problema 5

#include <stdio.h>

int main(){

	int n, c;
	scanf("%d %d", &n, &c);
	int passageiros_atutais = 0, valid = 1;
	for(int i = 0; i < n; i++){
		int out, in;
		scanf("%d %d", &out, &in);
		passageiros_atutais -= out;
		passageiros_atutais += in;
		if(passageiros_atutais > c){ valid=0; }
	}
	printf("%c\n", valid==0? 'S' : 'N');
	
	return 0;
}