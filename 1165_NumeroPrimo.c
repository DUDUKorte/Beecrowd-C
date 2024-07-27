#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    for(int i = 0; i< n; i++){
        int num, primo = 0;
        scanf("%d", &num);

        for(int j = 2; j < num; j++){
            if(num%j == 0){
                primo++;
            }
        }

        if(!primo){
            printf("%d eh primo\n", num);
        }else{
            printf("%d nao eh primo\n", num);
        }

    }

    return 0;
}