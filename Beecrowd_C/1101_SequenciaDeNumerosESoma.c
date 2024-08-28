#include <stdio.h>

int main(){

    while(1){
        int num1, num2, maior, menor, soma;
        scanf("%d %d", &num1, &num2);
        if(num1 <= 0 || num2 <= 0){ break; }

        maior = (num1 > num2)? num1 : num2;
        menor = (num1 < num2)? num1 : num2;
        soma = 0;

        for(int j = menor; j <= maior; j++){
            printf("%d ", j);
            soma += j;
        }

        printf("Sum=%d\n", soma);

    }

    return 0;
}