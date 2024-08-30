#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LEN 1000000

int main(void){

	int casos;

	scanf("%d", &casos);
	getchar();

	for(int i = 0; i < casos; i++){
		char frase_entrada[MAX_LEN];

		fgets(frase_entrada, sizeof(frase_entrada), stdin);

		// Remover o caractere de nova linha se existir
		frase_entrada[strcspn(frase_entrada, "\n")] = '\0';

		for(int j = 0; j < strlen(frase_entrada); j++){
			// Primeira Passada
			if(isalpha(frase_entrada[j])){
				frase_entrada[j] += 3;
			}
		}

		//Inverte - Segunda Passada 
		for(int j = 0; j < strlen(frase_entrada) / 2; j++){
			char tmp = frase_entrada[j];
			frase_entrada[j] = frase_entrada[(strlen(frase_entrada) - 1) - j];
			frase_entrada[(strlen(frase_entrada)-1) - j] = tmp;
		}

		//Terceira Passada
		for(int j = strlen(frase_entrada)/2.0; j < strlen(frase_entrada); j++){
			frase_entrada[j] -= 1;
		}

		printf("%s\n", frase_entrada);

	}
	return 0;
}
