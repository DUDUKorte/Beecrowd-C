#include <stdio.h>

int main(){

	int k;
	int m, n;
	int x, y;
	
	while(scanf("%d", &k) && k){

		scanf("%d %d", &m, &n);

		int i = 0;
		while(i < k){

			scanf("%d %d", &x, &y);

			if(x < m){
				if(y < n){
					printf("SO\n");
				}else if(y > n){
					printf("NO\n");
				}else{
					printf("divisa\n");
				}
			}else if(x > m){
				if(y < n){
					printf("SE\n");
				}else if(y > n){
					printf("NE\n");
				}else{
					printf("divisa\n");
				}
			}else{
				printf("divisa\n");
			}
			i++;
			
		}
		
	}
	
	return 0;
}