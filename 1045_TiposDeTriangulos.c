#include <stdio.h>
#include <stdlib.h>

double a, b, c = 0;

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
	double values[] = {a, b, c};
	qsort(values, sizeof(values)/sizeof(*values), sizeof(*values), comp);
	a = values[2];
	b = values[1];
	c = values[0];

	if(a >= b + c){ printf("NAO FORMA TRIANGULO\n"); }
	else{
		if(a*a == b*b + c*c) { printf("TRIANGULO RETANGULO\n"); }
		if(a*a > b*b + c*c) { printf("TRIANGULO OBTUSANGULO\n"); }
		if(a*a < b*b + c*c) { printf("TRIANGULO ACUTANGULO\n"); }
		if(a == b && b == c) { printf("TRIANGULO EQUILATERO\n"); }
		if((a == b && a != c) || (b == c && b != a) || (c == a && a != b)) { printf("TRIANGULO ISOSCELES\n"); }
	}
	
	return 0;
}