#include <stdio.h>

int main() {

	double positivos = 0;
	double soma = 0;
	double num = 0;
	double qtd = 0;

	for(int i = 0; i < 6; i++){
			scanf("%lf", &num);
			if(num>0){positivos++;soma+=num;}
	}

	printf("%.0lf valores positivos\n", positivos);
	printf("%.1lf\n", soma / positivos);

	return 0;
}