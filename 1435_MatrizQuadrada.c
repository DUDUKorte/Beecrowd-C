#include <stdio.h>

int main(){

    int n;
    while(scanf("%d", &n) && n>0){
        int matrix[n][n];

        //limpar a matrix
        for(int i = 0; i < n; i++){ for(int j = 0; j < n; j++){ matrix[i][j] = 0; } }

        int limite_i = n, limite_j = n, init_j = 0, init_i = 0;

        //Calcula as passagens na matriz
        for(int i = 0; limite_i > 0 ; i++){
            for(int i = init_i; i < limite_i; i++){
                for(int j = init_j; j < limite_j; j++){
                    matrix[i][j] += 1;
                }
            }
            limite_i--; limite_j--; init_i++; init_j++;
        }

        //Printar matriz
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                
                if(j==0){ printf("%3d", matrix[i][j]); }
                else{ printf(" %3d", matrix[i][j]); }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}