#include <stdio.h>

double ajuste, salario, novo_salario, reajuste = 0;

int main(void){

	scanf("%lf", &salario);
	
	if(salario <= 400){
		ajuste = 15;
	}else if(salario > 400 && salario <= 800){
		ajuste = 12;
	}else if(salario > 800 && salario <= 1200){
		ajuste = 10;
	}else if(salario > 1200 && salario <= 2000){
		ajuste = 7;
	}else if(salario > 2000){
		ajuste = 4;
	}

	novo_salario = salario + (salario * (ajuste/100));
	reajuste = salario * (ajuste/100);

	printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %%\n", novo_salario, reajuste, ajuste);
	
	return 0;
}