/*
X = float(input())
imp = 0
if X >= 4500:
		imp = (1000 * (8/100)) + (1500 * (18/100))
		dif = X - 4500 
		imp = imp + dif * (28/100)
elif X > 3000:
		imp = 1000 *(8/100)
		dif = X - 3000
		imp = imp + dif *(18/100)
elif X > 2000:
		dif = X - 2000
		imp = dif*(8/100)
if imp > 0:
	print(f"R$ {imp:.2f}")
else:
	print("Isento")
*/

#include <stdio.h>

int main(void){

	double renda = 0, diferenca = 0;
	double imposto = 0;
	scanf("%lf", &renda);
	
	if(renda>=4500){
		imposto = (1000 * (8.0/100.0)) + (1500 * (18.0/100.0));
		diferenca = renda - 4500;
		imposto = imposto + diferenca * (28.0/100.0);
	}else if (renda > 3000){
		imposto = 1000 * (8.0/100.0);
		diferenca = renda - 3000;
		imposto = imposto + diferenca * (18.0/100.0);
	}else if (renda > 2000){
		diferenca = renda - 2000;
		imposto = diferenca*(8.0/100.0);
	}

	if(imposto > 0){
		printf("R$ %.2lf\n", imposto);
	}else{
		printf("Isento\n");
	}
	
	return 0;
}