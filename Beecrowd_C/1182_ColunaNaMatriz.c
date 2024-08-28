#include <stdio.h>

int main(){
    //declara matriz
    double matrix[12][12];
    int coluna_op, resultado = 0;
    char op;
    scanf("%d", &coluna_op);
    scanf(" %c", &op);

    //Ler valores para a matriz
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf", &matrix[i][j]);
        }
    }

    //Calcular operação na matriz
    for(int i = 0; i < 12; i++){
        resultado += matrix[i][coluna_op];
    }

    printf("%.1lf\n", op == 'S' ? resultado : resultado/12.0);

    return 0;
}