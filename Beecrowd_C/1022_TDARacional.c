#include <stdio.h>

typedef struct {
    int num;
    int den;
} Racional;

void scanRac(Racional *R){
    scanf("%d / %d", &R->num, &R->den);
}

void printRac(Racional R){
    printf("%d/%d", R.num, R.den);
}

Racional addRac(Racional A, Racional B){
    Racional aux;

    aux.num = A.num*B.den + A.den*B.num;
    aux.den = A.den*B.den;
    return aux; 
}

Racional subRac(Racional A, Racional B){
    Racional aux;

    aux.num = A.num*B.den - A.den*B.num;
    aux.den = A.den*B.den;
    return aux; 
}

Racional mulRac(Racional A, Racional B){
    Racional aux;

    aux.num = A.num*B.num;
    aux.den = A.den*B.den;
    return aux; 
}

Racional divRac(Racional A, Racional B){
    Racional aux;

    aux.num = A.num*B.den;
    aux.den = A.den*B.num;
    return aux; 
}

int mdc(int n, int d){
    int r;

    while (d != 0){
        r = n%d;
        n=d; d=r;
    }
    return n;
}

Racional simRac(Racional R){
    int mdc_int = mdc(R.num, R.den);
    R.num /= mdc_int;
    R.den /= mdc_int;
    if (R.den < 0){
        R.den *= -1;
        R.num *= -1;
    }
    
    return R;
}

int main(){
    Racional A, B, Resultado, Resultado_Simplificado;
    char oper;
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanRac(&A);
        scanf(" %c ", &oper);
        scanRac(&B);

        switch(oper){
            case '+': Resultado = addRac(A, B); break;
            case '-': Resultado = subRac(A, B); break;
            case '*': Resultado = mulRac(A, B); break;
            case '/': Resultado = divRac(A, B); break;
        }

        Resultado_Simplificado = simRac(Resultado);
        printRac(Resultado);
        printf(" = ");
        printRac(Resultado_Simplificado);
        printf("\n");
    }


    return 0;
}
