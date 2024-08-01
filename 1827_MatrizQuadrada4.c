#include <stdio.h>

int main(){

    int n;
    while(scanf("%d", &n) != EOF){
        int matrix[n][n];
        int init_in = n/3;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j==i && ((j+1)*2)-1 == n){
                    matrix[i][j] = 4;
                }else if((i >= init_in && j >= init_in) && (n-i > init_in && n-j > init_in)){
                    matrix[i][j] = 1;
                }else if(j==i){
                    matrix[i][j] = 2;
                }else if((j+1)+(i+1) == n+1){
                    matrix[i][j] = 3;
                }else{
                    matrix[i][j] = 0;
                }
                printf("%d", matrix[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    }

    return 0;
}