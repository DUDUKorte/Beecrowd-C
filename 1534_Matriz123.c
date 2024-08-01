#include <stdio.h>

int main(){

    int n;
    while(scanf("%d", &n) != EOF){
        int matrix[n][n];
        int init_in = n/3;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                matrix[i][j] = 3;
                if(j==i){
                    matrix[i][j] = 1;
                }
                if((j+1)+(i+1) == n+1){
                    matrix[i][j] = 2;
                }
                printf("%d", matrix[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}