#include <stdio.h>

int main(){

    int n;
    while(scanf("%d", &n) && n > 0){
        int matrix[n][n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == 0 && j == 0){
                    matrix[i][j] = 1;
                }else{
                    matrix[i][j] = i-1 > -1 ? matrix[i-1][j] * 2 : matrix[i][j-1] * 2;
                }
            }
        }
        //digitos
        int t = matrix[n-1][n-1], digitos = 0;
        do{
            t%10;
            t = t/10;
            digitos++;
        }while(t > 0);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                j == 0 ? printf("%*d", digitos, matrix[i][j]) : printf(" %*d", digitos, matrix[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}