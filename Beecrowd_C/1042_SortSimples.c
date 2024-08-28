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
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int x[] = {a, b, c};
	
	// Função para ordenar a lista (lista, tamanho em bytes de cada elemento na lista, tamanho em bytes da lista, função que vai utilizar para comparar os elementos da lista)
	qsort(x, sizeof(x)/sizeof(*x), sizeof(*x), comp);

	for(int i =0; i < 3; i++){
		printf("%d\n", x[i]);
	}
	printf("\n%d\n%d\n%d\n", a, b, c);
	
	return 0;
}