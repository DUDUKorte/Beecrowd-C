#include <stdio.h>

int main() {

		int x = -1;

		while(1){
			int soma = 0;
			scanf("%d", &x);
			if(x==0){break;}
			
			for(int i = 0; i <= x; i++){
				soma += i * i;
			}
			printf("%d\n", soma);
			
		}

		return 0;
}