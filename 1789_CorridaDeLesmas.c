#include<stdio.h>

int main(){
    int n, maior, lesma;
    while(scanf("%d", &n) != EOF){
        maior = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &lesma);
            if(lesma > maior){
                maior = lesma;
            }
        }
        if(maior >= 20){
            printf("3\n");
        }else if(maior < 20 && maior >= 10){
            printf("2\n");
        }else{
            printf("1\n");
        }
    }

}