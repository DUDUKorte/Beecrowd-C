#include<stdio.h>

int main(void){

	int n;

	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		int numeroAtual;
		int positive = 0;

		scanf("%d", &numeroAtual);
		if(numeroAtual == 0){
			printf("NULL\n");
			continue;
		}
		
		if(numeroAtual > 0){
			//positive
			positive = 1;
		}else{ /*negative*/ positive = 0; }
		if(numeroAtual%2==0){
			printf("EVEN");
			positive == 1 ? printf(" POSITIVE\n") : printf(" NEGATIVE\n");
			//even
		}else{ /*odd*/
			printf("ODD");
			positive == 1 ? printf(" POSITIVE\n") : printf(" NEGATIVE\n");
		}
	}
	
	return 0;
}