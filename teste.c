#include<stdio.h>

int main(){

	int casos;

	scanf("%d", &casos);

	for(int i = 0; i < casos; i++){
		int pilha1, pilha2;
		scanf("%d %d", &pilha1, &pilha2);
		/*
		for(int j = pilha1 > pilha2 ? pilha1 : pilha2; j > 0; j--){
			if((pilha1%j == 0) && (pilha2%j == 0)){
				printf("%d\n", j);
				break;
			}
		}
		*/
		for(int j = 3; j < pilha1 > pilha2 ? pilha2: pilha1; j++){
			if((pilha1%j == 0) && (pilha2%j == 0)){
				printf("%d\n", j);
				break;
			}
		}
	}
	
	return 0;
}