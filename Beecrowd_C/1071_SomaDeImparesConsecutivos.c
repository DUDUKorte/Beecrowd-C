#include <stdio.h>

int main(void){
	int soma = 0;

	int menor, maior;
	scanf("%d %d", &menor, &maior);
	int aux = 0;
	if(menor>maior){ aux = maior; maior = menor; menor = aux; }

	for(int i = menor+1; i < maior ; i++){
		if(i%2!=0){
			soma += i;
		}
	}

	printf("%d\n", soma);

	return 0;
}