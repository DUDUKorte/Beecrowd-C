#include <stdio.h>

int main(void){

	char meses[][15] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int num = 0;
	scanf("%d", &num);
	printf("%s\n", meses[num-1]);

	return 0;
}