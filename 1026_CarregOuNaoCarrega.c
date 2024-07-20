#include <stdio.h>
#include<math.h>

int converter_bin(long long num, long long num2){

	long long resultado[32] = {0};
	long long resultado2[32] = {0};

	int i = 0;

	// Converter primeiro número para binário
	while(num > 0){
		resultado[i] = num%2;
		num = num / 2;
		i++;
	}

	// Exibir primeiro número em binário
	for(long long j = i-1; j >= 0; j--){
		//printf("%d", resultado[j]);
	}
	//printf("\n");

	// Converter segundo número para binário
	int i_ = 0;
	while(num2 > 0){
		resultado2[i_] = num2%2;
		num2 = num2 / 2;
		i_++;
	}

	// Exibir segundo número em binário
	for(int j = i-1; j >= 0; j--){
		//printf("%d", resultado2[j]);
	}
	//printf("\n");

	// Realizar soma dos binários
	long long contador = i > i_ ? i : i_;
	long long decimal = 0;
	int j = contador;
	for(j = contador-1; j >= -1 ; j--){
		long long dec_result = resultado[j] + resultado2[j] == 1 ? 1 : 0;
			//printf("%d", dec_result);
		decimal += dec_result*(pow(2, j));
	}

	printf("%Lu\n", decimal);
	
	return 0;
}

int main(){

	long long a, c;
	while(scanf("%Lu %Lu", &a, &c)!=EOF){
		converter_bin(a, c);
	}
	return 0;
}