/*
Questão 2 - Eduardo Nogueira Korte
Pronto
*/

#include<stdio.h>
#include<math.h>

typedef struct{
    long int first;
    long int second;
} complexNumber;

// Ler cada tipo de valor complexo
void readComplexNumber(complexNumber *cn){
    scanf("(%d %di)", &cn->first, &cn->second);
    getchar();
}

// Prinar os valores formatados
void printComplexNumber(complexNumber r){
    printf("(%d %s%di)\n", r.first, r.second > 0 ? "+" : "", r.second);
}

complexNumber AddComplexNumber(complexNumber a, complexNumber b){
    complexNumber r;
    r.first = (a.first + b.first);
    r.second = (a.second + b.second);
    return r;
}

complexNumber SubtractComplexNumver(complexNumber a, complexNumber b){
    complexNumber r;
    r.first = a.first-b.first;
    r.second = a.second-b.second;
    return r;
}

complexNumber MultiplyComplexNumver(complexNumber a, complexNumber b){
    complexNumber r;
    r.first = (a.first*b.first)-(a.second*b.second);
    r.second = (a.first*b.second)+(a.second*b.first);
    return r;
}

complexNumber DivideComplexNumver(complexNumber a, complexNumber b){
    complexNumber r;
    r.first = (((a.first*b.first)+(a.second*b.second)) / (pow(b.first, 2) + pow(b.second, 2)));
    r.second = (((a.second*b.first)-(a.first*b.second)) / (pow(b.first, 2) + pow(b.second, 2)));
    return r;
}


int main(){

    while(1){
        char oper;
        complexNumber A, B;
        // Ler os valores dos números complexos
        readComplexNumber(&A);
        if(scanf(" %c ", &oper) == EOF){ break; }
        readComplexNumber(&B);
        printf("%d %d %c %d %d\n", A.first, A.second, oper, B.first, B.second);
        
        // Faz a variável de resultado e testa para cada operação
        complexNumber Result;
        switch (oper)
        {
        case '+':
            Result = AddComplexNumber(A, B);
            break;
        case '-':
            Result = SubtractComplexNumver(A, B);
            break;
        case '*':
            Result = MultiplyComplexNumver(A, B);
            break;
        case '/':
            Result = DivideComplexNumver(A, B);
            break;
        }
        printComplexNumber(Result);
    }

    return 0;
}