#include <stdio.h>

int main(void){

		int cod, qtd = 0;
		float valores[] = {4.00, 4.50, 5.00, 2.00, 1.50};

		scanf("%d %d", &cod, &qtd);
		float total = qtd * valores[cod-1];

		printf("Total: R$ %.2f\n", total);
		return 0;
}