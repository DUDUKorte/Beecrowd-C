#include <stdio.h>
#include <string.h>

int main(void){

	char alfabeto[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	int num;

	scanf("%d", &num);

	for(int i = 0; i < num; i++){
		char frase[50];
		int chave = 0;
		scanf("%s %d", frase, &chave);

		for(int j = 0; j < strlen(frase); j++){
			for(int y = 0; y < strlen(alfabeto); y++){
				if(frase[j] == alfabeto[y]){
					if(y-chave < 0){ 
						int tmp_chave = strlen(alfabeto)+(y-chave);
						//printf("SIM %c -> %c\n", frase[j], alfabeto[tmp_chave]);
						printf("%c", alfabeto[tmp_chave]);
					}else{
						//printf("SIM %c -> %c\n", frase[j], alfabeto[y-chave]);
						printf("%c", alfabeto[y-chave]);
					}
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}