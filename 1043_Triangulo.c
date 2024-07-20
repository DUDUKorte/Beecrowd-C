#include <stdio.h>
#include <stdlib.h>

double a, b, c, resultado = 0;

// Função de comparação de elementos na lista
int comp(const void *elem1, const void *elem2){
	double f = *((double*) elem1);
	double s = *((double*) elem2);
	double _return = 0;
	f > s ? _return = 1 : f < s ? _return = -1 : _return;
	return _return;
}

int main(void){
	scanf("%lf %lf %lf", &a, &b, &c);
	double values[3] = {a, b, c};

	qsort(values, sizeof(values)/sizeof(*values), sizeof(*values), comp);


	
	if(values[0] + values[1] > values[2]){
		resultado = (a+b+c);
		printf("Perimetro = %.1lf\n", resultado);
	}else{
		resultado = ((a+b) * c) / 2.0;
		printf("Area = %.1lf\n", resultado);
	}
	
	return 0;
}