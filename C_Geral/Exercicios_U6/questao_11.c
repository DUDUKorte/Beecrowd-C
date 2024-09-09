#include<stdio.h>

typedef struct{
    double coeficientes[50];
    int grau;
} polinomio;

void readPolinomio(polinomio *P){
    scanf("%d", &P->grau);

    for(int i = P->grau; i >= 0; i--){
        scanf("%lf", &P->coeficientes[i]);
    }
}

void PrintPolinomio(polinomio P){
    for(int i = P.grau; i >= 0; i--){
        printf("%+.2fX^%d%s", P.coeficientes[i], i, i-1 < 0 ? "\n" : " ");
    }
}

polinomio AddPolinomio(polinomio _A, polinomio _B){
    polinomio P;

    if(_A.grau > _B.grau){
        P.grau = _A.grau;
    }else{
        P.grau = _B.grau;
    }

    for(int i = 0; i <= P.grau; i++){
        P.coeficientes[i] = 0;
    }

    for(int i = 0; i <= P.grau; i++){
        P.coeficientes[i] = _A.coeficientes[i] + _B.coeficientes[i];
    }

    return P;
}

polinomio multPolinomio(polinomio _A, polinomio _B){
    polinomio P;
    P.grau = _A.grau + _B.grau;

    for(int i = 0; i <= P.grau; i++){
        P.coeficientes[i] = 0;
    }

    for(int i = 0; i <= _A.grau; i++){
        for(int j = 0; j <= _B.grau; j++){
            P.coeficientes[i+j] += _A.coeficientes[i]*_B.coeficientes[j];
        }
    }

    return P;
}

polinomio divPolinomio(polinomio _A, polinomio _B){
    polinomio P;
    
    return P;
}

int main(){

    char oper;
    polinomio A, B;
    readPolinomio(&A);
    scanf(" %c ", &oper);
    readPolinomio(&B);

    PrintPolinomio(A);
    PrintPolinomio(B);

    polinomio aux;
    aux = AddPolinomio(A, B);
    PrintPolinomio(aux);
    
    aux = multPolinomio(A, B);
    PrintPolinomio(aux);

    return 0;
}
