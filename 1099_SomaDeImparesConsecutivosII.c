#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int num1, num2, maior, menor, soma;
        scanf("%d %d", &num1, &num2);

        maior = (num1 > num2)? num1 : num2;
        menor = (num1 < num2)? num1 : num2;
        soma = 0;

        for(int j = maior-1; j > menor; j--){
            if(!(j%2 == 0)){
                soma += j;
            }
        }

        printf("%d\n", soma);

    }

    return 0;
}