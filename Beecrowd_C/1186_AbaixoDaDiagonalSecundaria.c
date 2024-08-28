#include <stdio.h>

#define COL 12
#define LIN 12

int main(){
    //declara matriz
    double matrix[LIN][COL];
    double resultado = 0, elements = 0;
    char op;
    scanf(" %c", &op);

    //Ler valores para a matriz
    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            scanf("%lf", &matrix[i][j]);
        }
    }

    //Calcular operação na matriz
    for(int i = 0; i < LIN; i++){
        for(int j = COL-i; j < COL; j++){
            if(i > (COL-1)-j){
                resultado += matrix[i][j];
                elements++;
            }
        }
    }

    printf("%.1lf\n", op == 'S' ? resultado : resultado/elements);

    return 0;
}