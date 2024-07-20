#include<stdio.h>

int main(){

	int casos;

	scanf("%d", &casos);

	for(int i = 0; i < casos; i++){
		int pilha1, pilha2, maior, menor;
		scanf("%d %d", &pilha1, &pilha2);

		maior = pilha1 > pilha2? pilha1 : pilha2;
		menor = pilha1 < pilha2? pilha1 : pilha2;

		while(maior > 0){
				int temp = menor%maior;
				menor = maior;
				maior = temp;
				if(menor%maior == 0){
					printf("%d\n", maior);
					break;
				}
		}
	}
	
	return 0;
}
