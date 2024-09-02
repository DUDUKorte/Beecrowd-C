/*
Questão 01 - Eduardo Nogueira Korte
Pronto
*/

#include<stdio.h>
#include<math.h>

long f1(int x, int y){
    return powl((x+y), 2);
}

int main(){
    int x, y;
    while(scanf("%d %d", &x, &y) != EOF){
        printf("f1(%d, %d) = %d\n", x, y, f1(x, y));
    }
    
    return 0;
}
