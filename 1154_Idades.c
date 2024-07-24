#include <stdio.h>

int main(){

    int idade, idades = 0, c = 0;

    while(1){
        scanf("%d", &idade);
        if(idade < 0){
            break;
        }
        idades += idade;
        c++;
    }

    printf("%.2lf\n", (double)idades / c);

    return 0;
}