#include <stdio.h>
#include <string.h>

int main(){

    int n, newton;
    char nome[50];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){

        scanf(" %s %d", nome, &newton);

        if(strcmp(nome, "Thor") == 0){
            printf("Y\n");
        }else{
            printf("N\n");
        }
    }

    return 0;
}