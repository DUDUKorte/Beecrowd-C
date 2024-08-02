#include <stdio.h>

int main(){
    //declara matriz
    double matrix[12][12];
    double resultado = 0, elements = 0;
    char op;
    scanf(" %c", &op);

    //Ler valores para a matriz
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf", &matrix[i][j]);
        }
    }

    //Calcular operação na matriz
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12-i; j++){
            if(j < i){
                resultado += matrix[i][j];
                elements++;
            }
        }
    }

    printf("%.1lf\n", op == 'S' ? resultado : resultado/elements);

    return 0;
}