#include <stdio.h>

int main(){

    int n;
    while (scanf("%d", &n) && n>0)
    {
        int matrix[n][n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j){
                    matrix[i][j] = 1;
                }else{
                    matrix[i][j] = j > i ? (j-i)+1 : (i-j)+1;
                }
                j == 0 ? printf("%3d", matrix[i][j]) : printf(" %3d", matrix[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    

    return 0;
}