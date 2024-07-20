#include <stdio.h>
#include <stdlib.h>

// Função de comparação de elementos na lista
int comp(const void *elem1, const void *elem2){
	int f = *((int*) elem1);
	int s = *((int*) elem2);
	int _return = 0;
	f > s ? _return = 1 : f < s ? _return = -1 : _return;
	return _return;
}

int main(void){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int x[] = {a, b, c, d};

	// Função para ordenar a lista (lista, tamanho em bytes de cada elemento na lista, tamanho em bytes da lista, função que vai utilizar para comparar os elementos da lista)
	qsort(x, sizeof(x)/sizeof(*x), sizeof(*x), comp);

	if((x[0] + x[1] >= x[2] && x[1] + x[2] >= x[0] && x[0] + x[2] >= x[1]) || (x[1] + x[2] >= x[3] && x[1] + x[3] >= x[2] && x[3] + x[2] >= x[1])){
		printf("S\n");
	}else{
		printf("N\n");
	}

	return 0;
}