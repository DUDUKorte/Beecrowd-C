#include<stdio.h>

int main(void){

	double n, coelhos = 0, ratos = 0, sapos = 0, cobaias = 0;
	scanf("%lf", &n);

	for(int i = 0; i < n; i++){
		double cobaias_i;
		char tipo_cobaia;

		scanf("%lf %c", &cobaias_i, &tipo_cobaia);
		switch(tipo_cobaia){
			case 'C':
				coelhos+=cobaias_i;
				break;
			case 'R':
				ratos+=cobaias_i;
				break;
			case 'S':
				sapos+=cobaias_i;
				break;
		}
		cobaias+=cobaias_i;
	}

	printf("Total: %.0lf cobaias\n", cobaias);
	printf("Total de coelhos: %.0lf\n", coelhos);
	printf("Total de ratos: %.0lf\n", ratos);
	printf("Total de sapos: %.0lf\n", sapos);
	printf("Percentual de coelhos: %.2lf %%\n", ((coelhos*100)/cobaias));
	printf("Percentual de ratos: %.2lf %%\n", ((ratos*100)/cobaias));
	printf("Percentual de sapos: %.2lf %%\n", ((sapos*100)/cobaias));

	return 0;
}