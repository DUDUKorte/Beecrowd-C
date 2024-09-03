#include<stdio.h>

typedef struct{
    int coeficientes[50];
    int grau;
} polinomio;

void readPolinomio(polinomio *P){
    scanf("%d", &P->grau);

    for(int i = -1; i < P->grau; i++){
        scanf("%d", &P->coeficientes[i]);
    }
}

int main(){

    char oper;
    polinomio A, B;
    readPolinomio(&A);
    scanf(" %c ", &oper);
    readPolinomio(&B);

    return 0;
}