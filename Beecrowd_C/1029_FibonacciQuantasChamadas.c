#include<stdio.h>

int count = 0;
int calls = 0;

unsigned int fibo(unsigned int n){
    calls++;
    if(n==0){
        return 0;
    }else if(n==1){
        count++;
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
}

int main(){

    unsigned int m = 0;
    int k;
    scanf("%d", &k);
    for(int i =0; i < k; i++){
        calls = -1;
        count = 0;
        
        scanf("%u", &m);
        unsigned int result = fibo(m);
        printf("fib(%u) = %u calls = %u\n", m, calls, count);
    }

    return 0;
}